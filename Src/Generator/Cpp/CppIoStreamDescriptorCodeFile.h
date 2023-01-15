#pragma once

#include "CppInterfaceSerializerCodeFile.h"
#include <optional>
#include <stdexcept>
class CppIoStreamDescriptorCodeFile : public CppCodeFile {
public:
    CppIoStreamDescriptorCodeFile(bool enableExceptions, const std::string& interfaceName, bool invert) : CppCodeFile(enableExceptions), _interfaceName(interfaceName), _invert(invert) {

    }
    std::string getFileName(const std::string& moduleName) override {
        return _interfaceName + ".IoStreamDescriptor.h";
    }
    void writeSerializer(std::shared_ptr<Module> taskModule) {
        _module = taskModule;

        auto typeShortName = _interfaceName.substr(_interfaceName.find_last_of('.') + 1);
        auto typeGeneric = taskModule->findType(typeShortName);
        auto interfaceType = std::dynamic_pointer_cast<InterfaceType>(typeGeneric->type);

        std::string outStreamMethodName = "outStream";
        std::string inStreamMethodName = "inStream";

        std::optional<MethodArg> outInterface;
        std::optional<MethodArg> inInterface;
        for(auto& method : interfaceType->methods){
            if(method.name == outStreamMethodName){
                if(_invert){
                    inInterface = method.returnType;
                }else{
                    outInterface = method.returnType;
                }
            }else if(method.name == inStreamMethodName){
                if(_invert){
                    outInterface = method.returnType;
                }else{
                    inInterface = method.returnType;
                }
            }else{
                throw std::runtime_error(("Unexpected method in IO stream destiptor: " + method.name).c_str());
            }
        }

        
        writeLine("#pragma once");
        writeLine("#include <LFramework/COM/ComObject.h>");
        write("#include <").write(taskModule->name).writeLine(".h>");  


        if(inInterface.has_value()){
            std::string inInterfaceFullName = inInterface.value().type->type->moduleName + "." + inInterface.value().type->type->name;
            std::string inSerializerFileName = CppInterfaceSerializerCodeFile::getFileName(inInterfaceFullName, false);
            write("#include <").write(inSerializerFileName).writeLine(">");  
        }

        if(outInterface.has_value()){
            std::string outInterfaceFullName = outInterface.value().type->type->moduleName + "." + outInterface.value().type->type->name;
            std::string outSerializerFileName = CppInterfaceSerializerCodeFile::getFileName(outInterfaceFullName, true);
            write("#include <").write(outSerializerFileName).writeLine(">");  
        }

        //writeLine("#include <MicroNetwork.Common.h>"); 
        

        beginNamespaceScope(_module->name);


        write("struct ").write(interfaceType->name).write("IoStreamDescriptor");
        beginScope("");

        auto attrs = AttributeList::parse(interfaceType->attributes);
        auto guids = attrs.getAttributes<GuidAttribute>();
        comment("{" + guids[0]->guid.toString() + "}").writeLine();
        write("static constexpr LFramework::InterfaceID ID() { return ").write(guidToCode(guids[0]->guid)).writeLine("; }");



        if(inInterface.has_value()){
            std::string inInterfaceFullName = inInterface.value().type->type->moduleName + "." + inInterface.value().type->type->name;
            write("using InInterface = ").write(fullName(inInterface.value().type)).writeLine(";");
            write("using InInterfaceSerializer = ").write(toCppNamespace(inInterface.value().type->type->moduleName) + "::" + CppInterfaceSerializerCodeFile::getSerializerTypeName(inInterfaceFullName, false)).writeLine(";");
        }

        if(outInterface.has_value()){
            std::string outInterfaceFullName = outInterface.value().type->type->moduleName + "." + outInterface.value().type->type->name;
            write("using OutInterface = ").write(fullName(outInterface.value().type)).writeLine(";");
            write("using OutInterfaceSerializer = ").write(toCppNamespace(outInterface.value().type->type->moduleName) + "::" + CppInterfaceSerializerCodeFile::getSerializerTypeName(outInterfaceFullName, true)).writeLine(";");
        }


        endScope(";");

        endScope(); //End namespace scope
    }
private:

    std::string _interfaceName;
    bool _invert;
};