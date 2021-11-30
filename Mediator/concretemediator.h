#ifndef CONCRETEMEDIATOR_H
#define CONCRETEMEDIATOR_H

#include "mediator.h"
#include <QSharedPointer>

class Colleage;
class ConcreteMediator : public Mediator {
  Q_OBJECT
public:
  explicit ConcreteMediator(QObject *parent = nullptr);

  void initCollegage(const QSharedPointer<Colleage> &coll_a,
                     const QSharedPointer<Colleage> &coll_b);

  virtual void DoActionFromAToB();
  virtual void DoActionFromBToA();

signals:

public slots:
private:
  QSharedPointer<Colleage> _coll_a;
  QSharedPointer<Colleage> _coll_b;
};

#endif // CONCRETEMEDIATOR_H
