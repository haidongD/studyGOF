#ifndef CONCRETEELEMENT_H
#define CONCRETEELEMENT_H

#include "element.h"

class ConcreteElement : public Element {
  Q_OBJECT
public:
  explicit ConcreteElement(QObject *parent = nullptr);
  virtual void Accept(const QSharedPointer<Visitor> &vistor);
};

#endif // CONCRETEELEMENT_H
