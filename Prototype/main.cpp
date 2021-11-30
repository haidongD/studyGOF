#include "concreteprototype.h"
#include <QCoreApplication>

/**
 * @brief main Prototype模式重在从自身复制自己创建新类
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  Prototype *p = new ConcretePrototype();
  Prototype *p1 = p->Clone();
  p->printAddrOfPointer("p");
  p1->printAddrOfPointer("p1");

  return a.exec();
}
