#include "concretestatea.h"
#include "concretestateb.h"
#include <iostream>
using namespace std;

ConcreteStateA::ConcreteStateA() {}

ConcreteStateA::~ConcreteStateA() {}

void ConcreteStateA::OperationInterface(Context *con) {
  cout << "ConcreteStateA::OperationInterface ......" << endl;
}

void ConcreteStateA::OperationChangeState(Context *con) {
  OperationInterface(con);
  this->ChangeState(con, new ConcreteStateB());
}
