#include "context.h"
#include "interpret.h"
#include <QCoreApplication>

/**
 * @brief main
 * Interpreter模式的目的就是使用一个解释器为用户提供
 * 一个一门定义语言的语法表示的解释器，然后通过这个解
 * 释器来解释语言中的句子
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  Context *c = new Context();
  AbstractExpression *te = new TerminalExpression("hello");
  AbstractExpression *nte = new NonterminalExpression(te, 2);
  nte->Interpret(*c);

  return a.exec();
}
