#include "memento.h"

Memento::Memento(const State &state, QObject *parent)
    : QObject(parent), _state(state) {}

State Memento::state() { return _state; }

void Memento::setState(const State &state) { _state = state; }
