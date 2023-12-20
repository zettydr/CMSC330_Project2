// Diamond Zetty
// CMSC 330 Advanced Programming Languages
// Project 2
// Fall 2023

// This file contains a custom exception definition for an undefined variable in the case of an expression containing one or more variables that cannot be resolved
// during evaluation. Due to the the one line throws message which will be the same every time, the function is declared inline in the header.

#include <exception>
using namespace std;

class UndefinedVariableException : public std::exception 
{
	virtual const char* what() const throw() 
	{
		return "ERROR! There is an undefined variable inside of this expression.";
	}
};