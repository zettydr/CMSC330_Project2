//
// Created by Diamond Zetty on 12/11/2023.
//

// This file contains the class definition of the UnaryNegation class, which is a subclass of SubExpression,
// which in turn is a subclass of the Expression. Because both of its functions are one line functions,
// they are implemented as inline functions. Its constructor initializes the left and right subexpressions
// it inherits from SubExpression by calling the constructor of the SubExpression class. Because
// it is an indirect subclass of Expression it must implement the evaluate function, which it does
// by taking the left expression (since the unary is a postfix operator) and negating the result. There is no right side in an unary expression.

class UnaryNegation : public SubExpression {
public:
    UnaryNegation(Expression* left, Expression* right) : SubExpression(left, right) {
    }
    double evaluate() {
        return -(left->evaluate());
    }
};