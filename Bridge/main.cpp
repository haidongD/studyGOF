#include <QCoreApplication>

#include "concreteabstractionimpa.h"
#include "concreteabstractionimpb.h"
#include "refinedabstraction.h"

/**
 * @brief main
 * ridge是设计模式中比较复杂和难理解的模式之一，
 * 也是OO开发与设计中经常会用到的模式之一。使用
 * 组合（委托）的方式将抽象和实现彻底地解耦，这
 * 样的好处是抽象和实现可以分别独立地变化，系统
 * 的耦合性也得到了很好的降低。
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  AbstractionImp *imp_a = new ConcreteAbstractionImpA();
  AbstractionImp *imp_b = new ConcreteAbstractionImpB();
  Abstraction *abstract = new RefinedAbstraction(imp_a);
  abstract->Opration();
  delete abstract;
  abstract = nullptr;
  abstract = new RefinedAbstraction(imp_b);
  abstract->Opration();
  delete abstract;
  abstract = nullptr;

  return a.exec();
}
