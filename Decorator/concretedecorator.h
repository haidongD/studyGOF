#ifndef CONCRETEDECORATOR_H
#define CONCRETEDECORATOR_H

#include "decorator.h"

class ConcreteDecorator : public Decorator {
public:
  ConcreteDecorator(Component *com);
  virtual void Operation();
  void AddedBehavior();
};

#endif // CONCRETEDECORATOR_H
