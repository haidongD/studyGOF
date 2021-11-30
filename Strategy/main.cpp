#include "concretestrategya.h"
#include "concretestrategyb.h"
#include "context.h"
#include <QCoreApplication>

/**
 * @brief main
 * 与Template解决的是类似的问题，但是它是通过组合实现的
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  Context contextA(QSharedPointer<Strategy>(new ConcreteStrategyA()));
  Context contextB(QSharedPointer<Strategy>(new ConcreteStrategyB()));
  contextA.doAction();
  contextB.doAction();

  return a.exec();
}
