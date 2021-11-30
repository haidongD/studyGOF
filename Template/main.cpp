#include <QCoreApplication>

#include "concreteclass1.h"
#include "concreteclass2.h"

/**
 * @brief main
 * 对于某一个业务逻辑（算法实现）在不同的对象中有不同的细节实现，
 * 但是逻辑（算法）的框架（或通用的应用算法）是相同的。Template
 * 提供了这种情况的一个实现框架
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  ConcreteClass1 template1;
  ConcreteClass2 template2;
  template1.TemplateMethod();
  template2.TemplateMethod();

  return a.exec();
}
