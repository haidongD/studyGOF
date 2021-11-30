#include "concretehandlea.h"
#include <QDebug>

ConcreteHandleA::ConcreteHandleA(QObject *parent) : Handle(parent) {}

void ConcreteHandleA::RealHandleRequest() { qDebug() << __FUNCTION__; }
