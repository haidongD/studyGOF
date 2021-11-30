#include "concreteelement.h"
#include "visitor.h"

ConcreteElement::ConcreteElement(QObject *parent) : Element(parent) {}

void ConcreteElement::Accept(const QSharedPointer<Visitor> &vistor) {
  vistor->Visit(this);
}
