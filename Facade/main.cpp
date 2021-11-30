#include "facade.h"
#include <QCoreApplication>

/**
 * @brief main Façade模式在高层提供了一个统一的接口，解耦了系统
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  Facade fade;
  fade.OperationWrapper();

  return a.exec();
}
