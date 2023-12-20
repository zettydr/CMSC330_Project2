//
// Created by Diamond Zetty on 12/11/2023.
//

// This file contains the class definition of the TernaryOperator class, which is a subclass of SubExpression,
// which in turn is a subclass of the Expression. Because both of its functions are one line functions,
// they are implemented as inline functions. Its constructor initializes the left and right subexpressions
// it inherits from SubExpression by calling the constructor of the SubExpression class. Because
// it is an indirect subclass of Expression it must implement the evaluate function, which it does by checking if the first value given (to the left 
// of the operator) is NOT equal to 0. If that is the case, the first option (first number after the operator) is returned, otherwise it 
// returns the second number. 

class TernaryOperator : public SubExpression {
public:
    TernaryOperator(Expression* value, Expression* opt1, Expression* opt2) : SubExpression(left, right) {
        this->value = value;
        this->opt1 = opt1;
        this->opt2 = opt2;
    }
    double evaluate() {
        return (value->evaluate() != 0 ? opt1->evaluate() : opt2->evaluate());
    }
    Expression* value;
    Expression* opt1;
    Expression* opt2;
};