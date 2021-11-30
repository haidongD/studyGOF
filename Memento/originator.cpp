#include "originator.h"
#include "memento.h"
#include <QDebug>

Originator::Originator(const State &state, QObject *parent)
    : QObject(parent), _state(state) {}

QSharedPointer<Memento> Originator::CreateMemento() {
  return QSharedPointer<Memento>(new Memento(_state));
}

void Originator::StoreMemento(const QSharedPointer<Memento> &memento) {
  memento->setState(_state);
}

void Originator::RestoreToMemento(const QSharedPointer<Memento> &memento) {
  _state = memento->state();
}

void Originator::PrintState() {
  qDebug() << "cur state:" << QString::fromStdString(_state);
}

void Originator::SetState(const State &state) { _state = state; }
