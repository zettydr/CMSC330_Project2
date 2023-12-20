// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Fall 2023

// This file contains the body of the function contained in The Variable class. The evaluate function 
// looks up the value of a variable in the symbol table and returns that value.

#include <string>
#include <vector>
#include <iostream>
using namespace std;

#include "expression.h"
#include "operand.h"
#include "variable.h"
#include "symboltable.h"
#include "undefinedVariableException.h"


extern SymbolTable symbolTable;

double Variable::evaluate() {

    double value = symbolTable.lookUp(name);

    if (value == -1.0) {
        throw UndefinedVariableException();
    }
    else {
        return value;
    }

}