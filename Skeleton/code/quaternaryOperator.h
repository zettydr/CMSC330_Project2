//
// Created by Diamond Zetty on 12/11/2023.
//

// This file contains the class definition of the TernaryOperator class, which is a subclass of SubExpression,
// which in turn is a subclass of the Expression. Its constructor initializes the left and right subexpressions
// it inherits from SubExpression by calling the constructor of the SubExpression class. Because
// it is an indirect subclass of Expression it must implement the evaluate function, which it does
// by taking the values and determining which of the 3 options to choose based on the value of the variable before the operator.
class QuaternaryOperator : public SubExpression {
public:
    QuaternaryOperator(Expression* value, Expression* opt1, Expression* opt2, Expression* opt3) : SubExpression(left, right) {
        this->value = value;
        this->opt1 = opt1;
        this->opt2 = opt2;
		this->opt3 = opt3;
    }
    double evaluate() {
        if (value->evaluate() < 0) {
            return opt1->evaluate();
        }
        else if (value->evaluate() == 0) {
            return opt2->evaluate();
        }
        else {
            return opt3->evaluate();
        }
    }
    Expression* value;
    Expression* opt1;
    Expression* opt2;
    Expression* opt3;

};