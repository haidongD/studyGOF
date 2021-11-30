#include "concretecolleagea.h"
#include "concretecolleageb.h"
#include "concretemediator.h"
#include <QCoreApplication>

/**
 * @brief main
 * Mediator模式提供将对象间的交互和通讯封装在一个类中，
 * 各个对象间的通信不必显势去声明和引用，大大降低了系统
 * 的复杂性能（了解一个对象总比深入熟悉n个对象要好）。
 * 另外Mediator模式还带来了系统对象间的松耦合
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  QSharedPointer<Colleage> coll_a, coll_b;
  QSharedPointer<ConcreteMediator> mediator;

  mediator = QSharedPointer<ConcreteMediator>(new ConcreteMediator());
  coll_a = QSharedPointer<Colleage>(new ConcreteColleageA(mediator));
  coll_b = QSharedPointer<Colleage>(new ConcreteColleageB(mediator));

  mediator->initCollegage(coll_a, coll_b);

  coll_a->SetState("coll_a");
  coll_a->Action();

  coll_b->SetState("coll_b");
  coll_b->Action();

  return a.exec();
}
