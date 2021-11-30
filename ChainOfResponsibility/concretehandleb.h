#ifndef CONCRETEHANDLEB_H
#define CONCRETEHANDLEB_H

#include "handle.h"

class ConcreteHandleB : public Handle {
  Q_OBJECT
public:
  explicit ConcreteHandleB(QObject *parent = nullptr);

signals:

public slots:
protected:
  virtual void RealHandleRequest();
};

#endif // CONCRETEHANDLEB_H
