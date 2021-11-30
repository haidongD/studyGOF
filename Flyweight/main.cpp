#include "flyweightfactory.h"
#include <QCoreApplication>

/**
 * @brief main
 * Flyweight模式在实现过程中主要是要为共享对象提供一个存放的“仓库”（对象池）
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  FlyweightFactory factory;
  auto share = factory.GetFlyweight("concreteflyweight");
  auto unshare = factory.GetFlyweight("concreteunshareflyweight");
  share->Operation();
  unshare->Operation();

  return a.exec();
}
