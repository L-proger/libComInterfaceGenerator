#pragma once

#include "CppCodeFile.h"

class CppTaskCodeFile : public CppCodeFile {
public:
    CppTaskCodeFile(bool enableExceptions, const std::string& interfaceName, bool directionOut) : CppCodeFile(enableExceptions), _interfaceName(interfaceName), _directionOut(directionOut) {

    }

    std::string getFileName(const std::string& moduleName) override {
        return _interfaceName + ".Serializer." + (_directionOut ? "Out" : "In") + ".h";
    }
    void writeSerializer(std::shared_ptr<Module> taskModule) {
        _module = taskModule;

        auto typeShortName = _interfaceName.substr(_interfaceName.find_last_of('.') + 1);
        auto typeGeneric = taskModule->findType(typeShortName);
        auto interfaceType = std::dynamic_pointer_cast<InterfaceType>(typeGeneric->type);
        writeLine("#pragma once");
        write("#include <").write(taskModule->name).writeLine(".h>");  

        beginNamespaceScope(_module->name);

        if(_directionOut){
            writeOutSerializer(interfaceType);
        }else{
            writeInSerializer(interfaceType);
        }
        
       
        endScope(); //End namespace scope
    }


private:

    void writeOutSerializer(std::shared_ptr<InterfaceType> interfaceType) {
        auto typeShortName = _interfaceName.substr(_interfaceName.find_last_of('.') + 1);
        std::string serializerTypeName = typeShortName + "Serializer" + (_directionOut ? "Out" : "In");
        write("class " + serializerTypeName + " : public LFramework::ComImplement<" + serializerTypeName + ", LFramework::ComObject, " +  fullName(interfaceType) + ">");

        beginScope("");//Begin class scope
        unident().writeLine("public:").ident();

        //Constructor
        write(serializerTypeName).write("(LFramework::ComPtr<MicroNetwork::Common::IDataReceiver> next) : _next(next)");
        beginScope("");
        endScope();

        //Methods
        int methodId = 0;
        for(auto& method : interfaceType->methods){
            write("void ").write(method.name).write("(");
            writeWrapperArg(method.args[0], false);
            write(")");
            beginScope("");
            comment("PacketID: " + std::to_string(methodId)).writeLine("");
            writeLine("MicroNetwork::Common::PacketHeader header;");
            write("header.id = ").writeLine(std::to_string(methodId) + ";");
            write("header.size = sizeof(").write(fullName(method.args[0].type)).writeLine(");");

            write("_next->packet(header, &").write(method.args[0].name).writeLine(");");
            
            endScope();

            ++methodId;
        }

        //Protected fields
        unident().writeLine("public:").ident();
        writeLine("LFramework::ComPtr<MicroNetwork::Common::IDataReceiver> _next;");

        endScope(";"); //End class scope
    }

    void writeInSerializer(std::shared_ptr<InterfaceType> interfaceType) {
        auto typeShortName = _interfaceName.substr(_interfaceName.find_last_of('.') + 1);
        std::string serializerTypeName = typeShortName + "Serializer" + (_directionOut ? "Out" : "In");
        write("class " + serializerTypeName + " : public LFramework::ComImplement<" + serializerTypeName + ", LFramework::ComObject, MicroNetwork::Common::IDataReceiver>");

        beginScope("");//Begin class scope
        unident().writeLine("public:").ident();

        //Constructor
        write(serializerTypeName).write("(LFramework::ComPtr<" + fullName(interfaceType) + "> next) : _next(next)");
        beginScope("");
        endScope();

        //Methods
        int methodId = 0;
        write("void packet(MicroNetwork::Common::PacketHeader header, const void* data)");
        beginScope("");
            write("switch (header.id)");
            beginScope("");

            for(auto& method : interfaceType->methods){
                unident().write("case ").write(std::to_string(methodId)).writeLine(":").ident();
                write("_next->").write(method.name).write("(*(reinterpret_cast<const ").write(fullName(method.args[0].type)).writeLine("*>(data)));");
                writeLine("return;");
                ++methodId;
            }
            
            unident().writeLine("default:").ident();
            writeLine("throw LFramework::ComException(LFramework::Result::NotImplemented);");

            endScope();
        endScope();

        //Protected fields
        unident().writeLine("public:").ident();
        writeLine("LFramework::ComPtr<" + fullName(interfaceType) + "> _next;");

        endScope(";"); //End class scope
    }

    std::string _interfaceName;
    bool _directionOut;
};