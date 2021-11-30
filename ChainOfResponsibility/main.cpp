#include "concretehandlea.h"
#include "concretehandleb.h"
#include <QCoreApplication>

/**
 * @brief main
 * 将可能处理一个请求的对象链接成一个链，并将请求在这个链上传递，直到有对象处理该请求
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  QSharedPointer<Handle> handleA(new ConcreteHandleA());
  QSharedPointer<Handle> handleB(new ConcreteHandleB());

  handleA->SetSuccessor(handleB);

  handleA->HandleRequest();
  handleB->HandleRequest();

  return a.exec();
}
