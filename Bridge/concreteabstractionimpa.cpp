#include "concreteabstractionimpa.h"
#include <QDebug>

ConcreteAbstractionImpA::ConcreteAbstractionImpA() {}

void ConcreteAbstractionImpA::Operation() { qDebug() << __FUNCTION__; }
