#include "interpret.h"
#include <iostream>

AbstractExpression::~AbstractExpression() {}

void AbstractExpression::Interpret(const Context &c) {}

AbstractExpression::AbstractExpression() {}

TerminalExpression::TerminalExpression(const string &statement)
    : _statement(statement) {}

TerminalExpression::~TerminalExpression() {}

void TerminalExpression::Interpret(const Context &c) {
  cout << _statement << " TerminalExpression" << endl;
}

NonterminalExpression::NonterminalExpression(AbstractExpression *expression,
                                             int times)
    : _expression(expression), _times(times) {}

NonterminalExpression::~NonterminalExpression() {}

void NonterminalExpression::Interpret(const Context &c) {
  for (int i = 0; i < _times; i++) {
    this->_expression->Interpret(c);
  }
}
