#include "concretecomponent.h"
#include "concretedecorator.h"
#include <QCoreApplication>

/**
 * @brief main
 * Decorator提供了一种给类增加职责的方法，不是通过继承实现的，而是通过组合
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  Component *com = new ConcreteComponent();
  Decorator *decorator = new ConcreteDecorator(com);

  decorator->Operation();

  return a.exec();
}
