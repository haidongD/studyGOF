#ifndef INTERPRET_H
#define INTERPRET_H

#include "context.h"
#include <string>

using namespace std;

class AbstractExpression {
public:
  virtual ~AbstractExpression();
  virtual void Interpret(const Context &c);

protected:
  AbstractExpression();

private:
};

class TerminalExpression : public AbstractExpression {
public:
  TerminalExpression(const string &statement);
  ~TerminalExpression();
  void Interpret(const Context &c);

protected:
private:
  string _statement;
};

class NonterminalExpression : public AbstractExpression {
public:
  NonterminalExpression(AbstractExpression *expression, int times);
  ~NonterminalExpression();
  void Interpret(const Context &c);

protected:
private:
  AbstractExpression *_expression;
  int _times;
};

#endif // INTERPRET_H
