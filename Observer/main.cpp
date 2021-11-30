#include "concreteobservera.h"
#include "concreteobserverb.h"
#include "concretesubject.h"
#include <QCoreApplication>

/**
 * @brief main
 * 观察者模式(发布-订阅者模式)
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  QSharedPointer<Observer> observa =
      QSharedPointer<Observer>(new ConcreteObserverA());
  QSharedPointer<Observer> observb =
      QSharedPointer<Observer>(new ConcreteObserverB());
  QSharedPointer<Subject> suba = QSharedPointer<Subject>(new ConcreteSubject());
  QSharedPointer<Subject> subb = QSharedPointer<Subject>(new ConcreteSubject());

  observa->subscription(suba);
  observa->subscription(subb);

  observb->subscription(suba);

  suba->notify();
  subb->notify();

  return a.exec();
}
