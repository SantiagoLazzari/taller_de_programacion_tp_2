//
// Created by santi on 11/04/16.
//

#ifndef TP2_EXPRESSION_H
#define TP2_EXPRESSION_H


#include <list>

class Expression {
public:
    Expression() { }

    Expression(std::list<Expression *>expressions);

    //Attributes
    std::list<Expression *> expressions;

    //Setters
    virtual void setExpressions(std::list<Expression *>);

    //getters
    virtual std::list<Expression *> getExpressions();
    //Methods
    virtual std::list<Expression *> evaluate();
private:


};


#endif //TP2_EXPRESSION_H
