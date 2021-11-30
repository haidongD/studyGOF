#include "concretestrategyb.h"
#include <QDebug>

ConcreteStrategyB::ConcreteStrategyB(QObject *parent) : Strategy(parent) {}

void ConcreteStrategyB::algrithmInterface() {
  qDebug() << __FUNCTION__ << "start";
  qDebug() << __FUNCTION__ << "end";
}
