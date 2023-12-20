//#include "quaternaryOperator.h"
//
//
//QuaternaryOperator::QuaternaryOperator(Expression* value, Expression* opt1, Expression* opt2, Expression* opt3) : SubExpression(left, right) {
//    this->value = value;
//    this->opt1 = opt1;
//    this->opt2 = opt2;
//    this->opt3 = opt3;
//}
//
//double QuaternaryOperator::evaluate() {
//    if (this->value->evaluate() < 0) {
//        return this->opt1->evaluate();
//    }
//    else if (this->value->evaluate() == 0) {
//        return this->opt2->evaluate();
//    }
//    else {
//        return this->opt3->evaluate();
//    }
//}
