#include "concretecomponent.h"
#include <QDebug>

ConcreteComponent::ConcreteComponent() {}

void ConcreteComponent::Operation() { qDebug() << __FUNCTION__; }
