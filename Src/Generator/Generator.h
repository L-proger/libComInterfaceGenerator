#pragma once

#include <Type/Module.h>
#include <Generator/CodeFile.h>
#include <map>
#include <iostream>
#include <TypeCache.h>
#include <Generator/ExternalModule.h>
#include <Generator/Attribute/AttributeUtils.h>
#include <unordered_map>
#include <fstream>

class Generator {
public:
    Generator(){
        auto allModules = TypeCache::getModules();

        //filter only generatable modules
        for(auto& module : allModules){
            auto externalModule = std::dynamic_pointer_cast<ExternalModule>(module) != nullptr;
            if((module->name != TypeCache::primitiveModuleName()) && !externalModule){
                _writableModules.push_back(module);
            }
        }

        //validate interfaces
        validateInterfaces(findAllInterfaces(_writableModules));
    }
    void generate(const std::filesystem::path& outputPath) {
        std::filesystem::create_directories(outputPath);

        //generate outputs
        for(auto& module : _writableModules){
            auto codeFile = createCodeFile();
            codeFile->writeModule(module, true);
            saveCodeFile(outputPath, module->name, codeFile);
        }
    }

    void saveCodeFile(const std::filesystem::path& outputPath, const std::string& moduleName, std::shared_ptr<CodeFile> codeFile) {
        auto fileName = codeFile->getFileName(moduleName);
        auto filePath = outputPath / fileName;

        auto code = codeFile->toString();

        std::ofstream file;
        file.open(filePath, std::ios::binary | std::ios::out);
        file.write((char*)code.data(), code.size());
        file.close();
        std::cout << "Saving code file: " << filePath << std::endl;
    }

    std::vector<std::shared_ptr<Module>>& getWritableModules() {
        return _writableModules;
    }
protected:
    std::vector<std::shared_ptr<InterfaceType>> findAllInterfaces(std::vector<std::shared_ptr<Module>>& modules) {
        std::vector<std::shared_ptr<InterfaceType>> result;
        for(auto& module : modules){
            auto& types = module->types;
            for(auto& type : types){
                auto interfaceType = std::dynamic_pointer_cast<InterfaceType>(type->type);
                if(interfaceType != nullptr){
                    result.push_back(interfaceType);
                }
            }
        }
        return result;
    }

    bool validateInterfacesGuids(const std::vector<std::shared_ptr<InterfaceType>>& interfaces) {
        std::unordered_map<std::string, std::vector<std::shared_ptr<InterfaceType>>> guidMap;

        bool ok = true;
        for(auto& i : interfaces){
            auto attributeList = AttributeList::parse(i->attributes);
            auto guids = attributeList.getAttributes<GuidAttribute>();

            if(guids.size() == 0){
                std::cerr << "No Guid attribute foun for the interface: " << i->moduleName << "." << i->name << std::endl;
                ok = false;
            }else if(guids.size() > 1){
                std::cerr << "Found multiple Guid attributes for the interface: " << i->moduleName << "." << i->name << std::endl;
                ok = false;
            }else{
                guidMap[guids[0]->guid.toString()].push_back(i);
            }
        }

        for(auto& guidRecord : guidMap){
            if(guidRecord.second.size() != 1){
                ok = false;
                std::cerr << "Found multiple interfaces with the same Guid {" << guidRecord.first << "} :" << std::endl;
                for(std::size_t i = 0; i < guidRecord.second.size(); ++i){
                    std::cerr << "\t" << guidRecord.second[i]->moduleName << "." << guidRecord.second[i]->name << std::endl;
                }
            }
        }
        return ok;
    }

    bool validateInterfacesMethods(const std::vector<std::shared_ptr<InterfaceType>>& interfaces) {
        bool ok = true;
        for(auto& i : interfaces){
            std::unordered_map<std::string, std::vector<MethodDesc>> methodMap;
            for(auto& method : i->methods){
                methodMap[method.name].push_back(method);
            }

            for(auto& record : methodMap){
                if(record.second.size() > 1){
                    std::cerr << "Multiple methods with the same name were found in the interface \"" << i->moduleName << "." << i->name << "\" :" << std::endl;
                    for(std::size_t i = 0; i < record.second.size(); ++i){
                        auto& m = record.second[i];
                        std::cerr << "\t" << m.returnType.type->type->name << " " << m.name << "(";

                        for(std::size_t j = 0; j < m.args.size(); ++j){

                            std::cerr << m.args[j].name;
                            if(j < m.args.size() - 1){
                                std::cerr << ", ";
                            }
                        }
                        std::cerr << ");" << std::endl;
                    }

                    ok = false;
                }
            }
        }
        return ok;
    }

    void validateInterfaces(const std::vector<std::shared_ptr<InterfaceType>>& interfaces) {
        bool validateInterfacesGuidsResult = validateInterfacesGuids(interfaces);
        bool validateInterfacesMethodsResult = validateInterfacesMethods(interfaces);

        if(!validateInterfacesGuidsResult || !validateInterfacesMethodsResult){
            throw std::runtime_error("Interfaces validation failed");
        }
    }

    virtual std::shared_ptr<CodeFile> createCodeFile() = 0;

    std::vector<std::shared_ptr<Module>> _writableModules;
};
