#ifndef CONCRETEPROTOTYPE_H
#define CONCRETEPROTOTYPE_H

#include "prototype.h"

class ConcretePrototype : public Prototype {
public:
  ConcretePrototype();
  ConcretePrototype(const ConcretePrototype &cp);
  ~ConcretePrototype();
  Prototype *Clone() const;

protected:
private:
};

#endif // CONCRETEPROTOTYPE_H
