#pragma once

#include "CppCodeFile.h"

class CppTaskCodeFile : public CppCodeFile {
public:
    CppTaskCodeFile(bool enableExceptions) : CppCodeFile(enableExceptions) {

    }

    std::string getFileName(const std::string& moduleName) override {
        return moduleName + "_task_" + ".h";
    }
    void writeTask(std::shared_ptr<Module> taskModule, const std::string& consumer) {
        writeModule(taskModule, false);
    }
};