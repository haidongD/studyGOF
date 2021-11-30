#include "concretesubject.h"
#include "proxy.h"
#include <QCoreApplication>

/**
 * @brief main
 * Proxy模式最大的好处就是实现了逻辑和实现的彻底解耦
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  Proxy proxy(QSharedPointer<Subject>(new ConcreteSubject()));
  proxy.request();

  return a.exec();
}
