// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Fall 2023

// This file contains the body of the function parseName contained in the Operand class. That function
// parses the next token. When the next non-whitespace character is a digit, it assumes a literal is next. 
// When the next character is a left parenthesis, a recursive call is made to parse the subexpression.
// Otherwise the next token is assumed to a variable. No checks are made to ensure correct syntax.

#include <cctype>
#include <iostream>
#include <sstream>
#include <list>
#include <string>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "variable.h"
#include "literal.h"
#include "parse.h"

Expression* Operand::parse(stringstream& in) {
    char paren;
    char nextChar;
    in >> ws;
    bool valid = true;
    string value;
    if (isdigit((nextChar = in.peek()))) {
        while (valid) {
            nextChar = in.peek();
            if (isdigit(nextChar) || nextChar == '.') {
                in >> nextChar;
                value += nextChar;  
            }
            else {
                valid = false;     
            }
           
        }
        Expression* literal = new Literal(stod(value));
        return literal;
    }
    
    if (in.peek() == '(') {
        in >> paren;
        return SubExpression::parse(in);
    }
    else
        return new Variable(parseName(in));
    return 0;
}
