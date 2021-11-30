#include "concreteclass2.h"
#include <QDebug>

ConcreteClass2::ConcreteClass2(QObject *parent) : AbstractClass(parent) {}

void ConcreteClass2::PrimitiveOperation1() {
  qDebug() << __FUNCTION__ << "start";
  qDebug() << __FUNCTION__ << "end";
}

void ConcreteClass2::PrimitiveOperation2() {
  qDebug() << __FUNCTION__ << "start";
  qDebug() << __FUNCTION__ << "end";
}
