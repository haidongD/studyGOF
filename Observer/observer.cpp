#include "observer.h"
#include "subject.h"

void Observer::subscription(const QSharedPointer<Subject> &pub) {
  pub->reg(QSharedPointer<Observer>(this));
}

void Observer::unsubscription(const QSharedPointer<Subject> &pub) {
  pub->unreg(QSharedPointer<Observer>(this));
}
