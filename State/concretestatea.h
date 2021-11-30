#ifndef CONCRETESTATEA_H
#define CONCRETESTATEA_H
#include "state.h"

class ConcreteStateA : public State {
public:
  ConcreteStateA();
  virtual ~ConcreteStateA();
  virtual void OperationInterface(Context *con);
  virtual void OperationChangeState(Context *con);

protected:
private:
};

#endif // CONCRETESTATEA_H
