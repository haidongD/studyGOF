#include "concreteelement.h"
#include "concretevisitor.h"
#include <QCoreApplication>

/**
 * @brief main
 * 将更新（变更）封装到一个类中（访问操作），并由待更改类提供一个接收接口
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  QSharedPointer<Element> ele(new ConcreteElement());
  QSharedPointer<Visitor> vis(new ConcreteVisitor());
  ele->Accept(vis);

  return a.exec();
}
