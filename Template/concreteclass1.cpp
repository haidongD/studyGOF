#include "concreteclass1.h"
#include <QDebug>

ConcreteClass1::ConcreteClass1(QObject *parent) : AbstractClass(parent) {}

void ConcreteClass1::PrimitiveOperation1() {
  qDebug() << __FUNCTION__ << "start";
  qDebug() << __FUNCTION__ << "end";
}

void ConcreteClass1::PrimitiveOperation2() {
  qDebug() << __FUNCTION__ << "start";
  qDebug() << __FUNCTION__ << "end";
}
