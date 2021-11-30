#include "concreteflyweight.h"
#include <QDebug>

ConcreteFlyweight::ConcreteFlyweight(QObject *parent) : Flyweight(parent) {}

void ConcreteFlyweight::Operation() { qDebug() << __FUNCTION__; }
