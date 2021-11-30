#include "concreteproduct1.h"
#include <QDebug>

ConcreteProduct1::ConcreteProduct1() {}

void ConcreteProduct1::Operation() { qDebug() << __FUNCTION__; }
