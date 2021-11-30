#include "concreteobservera.h"
#include <QDebug>

ConcreteObserverA::ConcreteObserverA(QObject *parent) : Observer(parent) {}

ConcreteObserverA::~ConcreteObserverA() { qDebug() << __FUNCTION__; }

void ConcreteObserverA::update(const Subject &pub) {
  qDebug() << __FUNCTION__ << "start";
  qDebug() << "recive update from pub(" << &pub << ")";
  qDebug() << __FUNCTION__ << "end";
}
