#include "concreteprototype.h"
#include <QDebug>

ConcretePrototype::ConcretePrototype() {}

ConcretePrototype::ConcretePrototype(const ConcretePrototype &cp) {
  qDebug() << __FUNCTION__;
}

ConcretePrototype::~ConcretePrototype() {}

Prototype *ConcretePrototype::Clone() const {
  return new ConcretePrototype(*this);
}
