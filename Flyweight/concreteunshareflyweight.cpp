#include "concreteunshareflyweight.h"
#include <QDebug>

ConcreteUnshareFlyweight::ConcreteUnshareFlyweight(QObject *parent)
    : Flyweight(parent) {}

void ConcreteUnshareFlyweight::Operation() { qDebug() << __FUNCTION__; }
