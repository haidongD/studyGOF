#include "state.h"
#include "context.h"
#include <iostream>

using namespace std;

State::State() {}

State::~State() {}

bool State::ChangeState(Context *con, State *st) {
  con->ChangeState(st);
  return true;
}

void State::OperationChangeState(Context *) {}

void State::OperationInterface(Context *) { cout << "State::.." << endl; }
