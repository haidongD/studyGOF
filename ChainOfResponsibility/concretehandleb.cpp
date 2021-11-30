#include "concretehandleb.h"
#include <QDebug>

ConcreteHandleB::ConcreteHandleB(QObject *parent) : Handle(parent) {}

void ConcreteHandleB::RealHandleRequest() { qDebug() << __FUNCTION__; }
