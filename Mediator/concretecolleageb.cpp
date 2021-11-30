#include "concretecolleageb.h"
#include "mediator.h"
#include <QDebug>

ConcreteColleageB::ConcreteColleageB(const QSharedPointer<Mediator> &mediator,
                                     QObject *parent)
    : Colleage(mediator, parent), _state(QVariant()) {}

void ConcreteColleageB::Action() { _mediator->DoActionFromBToA(); }

void ConcreteColleageB::SetState(const QVariant &state) { //反序列化
  // do something
  _state = state;
  qDebug() << __FUNCTION__ << _state;
}

QVariant ConcreteColleageB::State() { // 序列化
  return _state;
}
