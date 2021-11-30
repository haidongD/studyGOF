#ifndef CONCRETEFLYWEIGHT_H
#define CONCRETEFLYWEIGHT_H

#include "flyweight.h"

class ConcreteFlyweight : public Flyweight {
  Q_OBJECT
public:
  explicit ConcreteFlyweight(QObject *parent = nullptr);

  virtual void Operation();

signals:

public slots:
};

#endif // CONCRETEFLYWEIGHT_H
