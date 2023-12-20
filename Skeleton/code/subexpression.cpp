// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Fall 2023

// This file contains the body of the functions contained in The SubExpression class, which includes
// the constructor that initializes the left and right subexpressions and the static function parse
// parses the subexpression. Addition and subtraction are the two operators that are implemented.

#include <iostream>
#include <sstream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "multiply.h"
#include "division.h"
#include "remainder.h"
#include "exponentiation.h"
#include "minimum.h"
#include "maximum.h"
#include "average.h"
#include "unaryNegation.h"
#include "ternaryOperator.h"
#include "quaternaryOperator.h"

SubExpression::SubExpression(Expression* left, Expression* right) {
    this->left = left;
    this->right = right;
}

Expression* SubExpression::parse(stringstream& in) {
    Expression* left;
    Expression* right;
    char operation, paren, opt1, opt2, opt3;
    
    left = Operand::parse(in);
    in >> operation;
    if (operation == '?') {
        stringstream s1;
        stringstream s2;
        in >> opt1;
        in >> opt2;
        s1 << opt1;
        s2 << opt2;
       return new TernaryOperator(left, Operand::parse(s1), Operand::parse(s2));
    }
    else if (operation == '#') {
        stringstream s1;
        stringstream s2;
        stringstream s3;
        in >> opt1;
        in >> opt2;
        in >> opt3;
        s1 << opt1;
        s2 << opt2;
        s3 << opt3;
        return new QuaternaryOperator(left, Operand::parse(s1), Operand::parse(s2), Operand::parse(s3));
    }
    right = Operand::parse(in);
    in >> paren;

    switch (operation) {
    case '+':
        return new Plus(left, right);
    case '-':
        return new Minus(left, right);
    case '*':
        return new Multiply(left, right);
    case '/':
        return new Division(left, right);
    case '%':
        return new Remainder(left, right);
    case '^':
        return new Exponentiation(left, right);
    case '<':
        return new Minimum(left, right);
    case '>':
        return new Maximum(left, right);
    case '&':
        return new Average(left, right);
    case '~':
        return new UnaryNegation(left, right); 
    }
    return 0;
}
        