#include "concretemediator.h"
#include "colleage.h"
#include <QVariant>

ConcreteMediator::ConcreteMediator(QObject *parent)
    : Mediator(parent), _coll_a(QSharedPointer<Colleage>(nullptr)),
      _coll_b(QSharedPointer<Colleage>(nullptr)) {}

void ConcreteMediator::DoActionFromAToB() {
  if (!_coll_b.isNull()) {
    _coll_b->SetState(_coll_a->State());
  }
}

void ConcreteMediator::DoActionFromBToA() {
  if (!_coll_a.isNull()) {
    _coll_a->SetState(_coll_b->State());
  }
}

void ConcreteMediator::initCollegage(const QSharedPointer<Colleage> &coll_a,
                                     const QSharedPointer<Colleage> &coll_b) {
  _coll_a = coll_a;
  _coll_b = coll_b;
}
