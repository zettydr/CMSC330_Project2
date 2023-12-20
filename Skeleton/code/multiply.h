//
// Created by Diamond Zetty on 12/11/2023.
//

// This file contains the class definition of the Multiply class, which is a subclass of SubExpression,
// which in turn is a subclass of the Expression. Because both of its functions are one line functions,
// they are implemented as inline functions. Its constructor initializes the left and right subexpressions
// it inherits from SubExpression by calling the constructor of the SubExpression class. Because
// it is an indirect subclass of Expression it must implement the evaluate function, which it does
// by returning the multiplication result of the values of the two subexpressions.

class Multiply: public SubExpression {
public:
    Multiply(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate()  {
        return left->evaluate() * right->evaluate();
    }
};