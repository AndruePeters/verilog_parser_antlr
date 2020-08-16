#ifndef CIRCUIT_BUILDER_H_
#define CIRCUIT_BUILDER_H_

#include "circuit_def.h"


class CircuitBuilder {
    std::vector<Circuit::Definition::ModuleDefinition> moduleDefs;

public:
    void addModule(const std::string moduleName);
    

};

#endif