#include "concretecolleagea.h"
#include "mediator.h"
#include <QDebug>

ConcreteColleageA::ConcreteColleageA(const QSharedPointer<Mediator> &mediator,
                                     QObject *parent)
    : Colleage(mediator, parent), _state(QVariant()) {}

void ConcreteColleageA::Action() { _mediator->DoActionFromAToB(); }

void ConcreteColleageA::SetState(const QVariant &state) {
  //反序列化
  // do something
  _state = state;
  qDebug() << __FUNCTION__ << _state;
}

QVariant ConcreteColleageA::State() {
  // 序列化
  return _state;
}
