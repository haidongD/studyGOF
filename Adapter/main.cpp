#include "adaptee.h"
#include "adapter.h"
#include <QCoreApplication>

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  Adaptee *adaptee = new Adaptee();
  Target *target = new Adapter(adaptee);

  target->Request();

  return a.exec();
}
