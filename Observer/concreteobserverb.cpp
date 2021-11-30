#include "concreteobserverb.h"
#include <QDebug>

ConcreteObserverB::ConcreteObserverB(QObject *parent) : Observer(parent) {}

ConcreteObserverB::~ConcreteObserverB() { qDebug() << __FUNCTION__; }

void ConcreteObserverB::update(const Subject &pub) {
  qDebug() << __FUNCTION__ << "start";
  qDebug() << "recive update from pub(" << &pub << ")";
  qDebug() << __FUNCTION__ << "end";
}
