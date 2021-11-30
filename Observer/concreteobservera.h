#ifndef CONCRETEOBSERVERA_H
#define CONCRETEOBSERVERA_H

#include "observer.h"
class ConcreteObserverA : public Observer {
  Q_OBJECT
public:
  explicit ConcreteObserverA(QObject *parent = nullptr);
  ~ConcreteObserverA();

  virtual void update(const Subject &pub);
signals:

public slots:
};

#endif // CONCRETEOBSERVERA_H
