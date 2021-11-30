#include "concretedecorator.h"
#include <QDebug>

ConcreteDecorator::ConcreteDecorator(Component *com) : Decorator(com) {}

void ConcreteDecorator::Operation() {
  qDebug() << __FUNCTION__;
  _com->Operation();
  this->AddedBehavior();
}

void ConcreteDecorator::AddedBehavior() { qDebug() << __FUNCTION__; }
