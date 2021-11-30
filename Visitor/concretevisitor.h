#ifndef CONCRETEVISITOR_H
#define CONCRETEVISITOR_H

#include "visitor.h"

class ConcreteVisitor : public Visitor {
  Q_OBJECT
public:
  explicit ConcreteVisitor(QObject *parent = nullptr);

  virtual void Visit(Element *ele);

signals:

public slots:
};

#endif // CONCRETEVISITOR_H
