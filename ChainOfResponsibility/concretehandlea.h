#ifndef CONCRETEHANDLEA_H
#define CONCRETEHANDLEA_H

#include "handle.h"

class ConcreteHandleA : public Handle {
  Q_OBJECT
public:
  explicit ConcreteHandleA(QObject *parent = nullptr);

signals:

public slots:
protected:
  virtual void RealHandleRequest();
};

#endif // CONCRETEHANDLEA_H
