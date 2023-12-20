// Diamond Zetty
// CMSC 330 Advanced Programming Languages
// Project 2
// Fall 2023

// This file contains a custom exception definition for an previously defined variable in the case of an expression containing one or more variables 
// are defined more than once. For example: (aa + 1), aa = 1, aa = 2;
// Due to the the one line throws message which will be the same every time, the function is declared inline in the header.

#include <exception>
using namespace std;

class PreviouslyDefinedVariableException : public std::exception 
{
	 virtual const char* what() const throw() 
	{
		return "ERROR! There is an variable defined more than once in this expression.";
	}
};