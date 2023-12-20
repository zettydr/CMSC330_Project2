// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Fall 2023

// This file contains the body of the functions contained in The SymbolTable class. The insert function 
// inserts a new variable symbol and its value into the symbol table and the lookUp function returns
// that value of the supplied variable symbol name.

#include <string>
#include <vector>
#include "previouslyDefinedVariableException.h"
using namespace std;

#include "symboltable.h"

void SymbolTable::insert(string variable, double value) {
    const Symbol& symbol = Symbol(variable, value);

    if (lookUp(variable) != -1.0){
        // this variable already exists in the symbol table for this expression, throw an error
        throw PreviouslyDefinedVariableException();
    }
    else 
    {
        elements.push_back(symbol);
    }
}

double SymbolTable::lookUp(string variable) const {
    for (int i = 0; i < elements.size(); i++)
        if (elements[i].variable == variable)
             return elements[i].value;
    return -1;
}

void SymbolTable::clean(){
    elements.clear();
}

