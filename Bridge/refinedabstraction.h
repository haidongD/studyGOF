#ifndef REFINEDABSTRACTION_H
#define REFINEDABSTRACTION_H

#include "abstraction.h"

class AbstractionImp;

class RefinedAbstraction : public Abstraction {
public:
  RefinedAbstraction(AbstractionImp *imp);
  virtual void Opration();

private:
  AbstractionImp *_imp;
};

#endif // REFINEDABSTRACTION_H
