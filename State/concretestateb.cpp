#include "concretestateb.h"
#include "concretestatea.h"
#include <iostream>
using namespace std;

ConcreteStateB::ConcreteStateB() {}

ConcreteStateB::~ConcreteStateB() {}

void ConcreteStateB::OperationInterface(Context *con) {
  cout << "ConcreteStateB::OperationInterface......" << endl;
}

void ConcreteStateB::OperationChangeState(Context *con) {
  OperationInterface(con);
  this->ChangeState(con, new ConcreteStateA());
}
