#ifndef CONCRETEUNSHAREFLYWEIGHT_H
#define CONCRETEUNSHAREFLYWEIGHT_H

#include "flyweight.h"

class ConcreteUnshareFlyweight : public Flyweight {
  Q_OBJECT
public:
  explicit ConcreteUnshareFlyweight(QObject *parent = nullptr);

  virtual void Operation();
signals:

public slots:
};

#endif // CONCRETEUNSHAREFLYWEIGHT_H
