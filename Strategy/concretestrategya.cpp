#include "concretestrategya.h"
#include <QDebug>

ConcreteStrategyA::ConcreteStrategyA(QObject *parent) : Strategy(parent) {}

void ConcreteStrategyA::algrithmInterface() {
  qDebug() << __FUNCTION__ << "start";
  qDebug() << __FUNCTION__ << "end";
}
