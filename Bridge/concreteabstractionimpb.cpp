#include "concreteabstractionimpb.h"
#include <QDebug>

ConcreteAbstractionImpB::ConcreteAbstractionImpB() {}

void ConcreteAbstractionImpB::Operation() { qDebug() << __FUNCTION__; }
