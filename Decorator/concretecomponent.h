#ifndef CONCRETECOMPONENT_H
#define CONCRETECOMPONENT_H

#include "component.h"

class ConcreteComponent : public Component {
public:
  ConcreteComponent();

  virtual void Operation();
};

#endif // CONCRETECOMPONENT_H
