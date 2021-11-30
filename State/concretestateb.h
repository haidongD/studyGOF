#ifndef CONCRETESTATEB_H
#define CONCRETESTATEB_H
#include "state.h"

class ConcreteStateB : public State {
public:
  ConcreteStateB();
  virtual ~ConcreteStateB();
  virtual void OperationInterface(Context *con);
  virtual void OperationChangeState(Context *con);

protected:
private:
};

#endif // CONCRETESTATEB_H
