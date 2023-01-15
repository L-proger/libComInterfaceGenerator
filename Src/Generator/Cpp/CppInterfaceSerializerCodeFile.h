#pragma once

#include "CppCodeFile.h"

class CppInterfaceSerializerCodeFile : public CppCodeFile {
public:
    CppInterfaceSerializerCodeFile(bool enableExceptions, const std::string& interfaceName, bool directionOut) : CppCodeFile(enableExceptions), _interfaceName(interfaceName), _directionOut(directionOut) {

    }
    static std::string getFileName(const std::string& interfaceName, bool directionOut) {
        return interfaceName + ".Serializer." + (directionOut ? "Out" : "In") + ".h";
    }
    std::string getFileName(const std::string& moduleName) override {
        return getFileName(_interfaceName, _directionOut);
    }
    void writeSerializer(std::shared_ptr<Module> taskModule) {
        _module = taskModule;

        auto typeShortName = _interfaceName.substr(_interfaceName.find_last_of('.') + 1);
        auto typeGeneric = taskModule->findType(typeShortName);
        auto interfaceType = std::dynamic_pointer_cast<InterfaceType>(typeGeneric->type);
        writeLine("#pragma once");
        writeLine("#include <LFramework/COM/ComObject.h>");
        writeLine("#include <MicroNetwork.Common.h>"); 
        write("#include <").write(taskModule->name).writeLine(".h>");  

        beginNamespaceScope(_module->name);

        if(_directionOut){
            writeOutSerializer(interfaceType);
        }else{
            writeInSerializer(interfaceType);
        }
        
        endScope(); //End namespace scope
    }

    static std::string getSerializerTypeName(const std::string& interfaceName, bool directionOut) {
        auto typeShortName = interfaceName.substr(interfaceName.find_last_of('.') + 1);
        return typeShortName + "Serializer" + (directionOut ? "Out" : "In");
    }
private:

    void writeOutSerializer(std::shared_ptr<InterfaceType> interfaceType) {
        std::string serializerTypeName = getSerializerTypeName(_interfaceName, _directionOut);
        write("class " + serializerTypeName + " : public LFramework::ComImplement<" + serializerTypeName + ", LFramework::ComObject, " +  fullName(interfaceType) + ">");

        beginScope("");//Begin class scope
        unident().writeLine("public:").ident();

        //Constructor
        write(serializerTypeName).write("(LFramework::ComPtr<MicroNetwork::Common::IDataReceiver> next) : _next(next)");
        beginScope("");
        endScope();

        //Methods
        int methodId = 0;
        std::string resultType = _enableExceptions ? "void" : "LFramework::Result";

        for(auto& method : interfaceType->methods){
            write(resultType + " ").write(method.name).write("(");
            writeWrapperArg(method.args[0], false);
            write(")");
            beginScope("");
            comment("PacketID: " + std::to_string(methodId)).writeLine("");
            writeLine("MicroNetwork::Common::PacketHeader header;");
            write("header.id = ").writeLine(std::to_string(methodId) + ";");
            write("header.size = sizeof(").write(fullName(method.args[0].type)).writeLine(");");


            std::string returnPrefix = _enableExceptions ? "" : "return ";
            write(returnPrefix).write("_next->packet(header, &").write(method.args[0].name).writeLine(");");
            
            endScope();

            ++methodId;
        }

        //Protected fields
        unident().writeLine("public:").ident();
        writeLine("LFramework::ComPtr<MicroNetwork::Common::IDataReceiver> _next;");

        endScope(";"); //End class scope
    }

    void writeInSerializer(std::shared_ptr<InterfaceType> interfaceType) {
        std::string serializerTypeName = getSerializerTypeName(_interfaceName, _directionOut);


        write("class " + serializerTypeName + " : public LFramework::ComImplement<" + serializerTypeName + ", LFramework::ComObject, MicroNetwork::Common::IDataReceiver>");

        beginScope("");//Begin class scope
        unident().writeLine("public:").ident();

        //Constructor
        write(serializerTypeName).write("(LFramework::ComPtr<" + fullName(interfaceType) + "> next) : _next(next)");
        beginScope("");
        endScope();

        //Methods
        int methodId = 0;

        std::string resultType = _enableExceptions ? "void" : "LFramework::Result";

        write(resultType + " packet(MicroNetwork::Common::PacketHeader header, const void* data)");
        beginScope("");
            write("switch (header.id)");
            beginScope("");

            for(auto& method : interfaceType->methods){
                unident().write("case ").write(std::to_string(methodId)).writeLine(":").ident();
                write("_next->").write(method.name).write("(*(reinterpret_cast<const ").write(fullName(method.args[0].type)).writeLine("*>(data)));");
                
                if(_enableExceptions){
                    writeLine("return;");
                }else{
                    writeLine("return LFramework::Result::Ok;");
                }
                ++methodId;
            }
            
            unident().writeLine("default:").ident();
            if(_enableExceptions){
                writeLine("throw LFramework::ComException(LFramework::Result::NotImplemented);");
            }else{
                writeLine("return LFramework::Result::InvalidArg;");
            }
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