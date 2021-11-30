#ifndef CONCRETEOBSERVERB_H
#define CONCRETEOBSERVERB_H

#include "observer.h"

class ConcreteObserverB : public Observer {
  Q_OBJECT
public:
  explicit ConcreteObserverB(QObject *parent = nullptr);
  ~ConcreteObserverB();

  virtual void update(const Subject &pub);
signals:

public slots:
};

#endif // CONCRETEOBSERVERB_H
