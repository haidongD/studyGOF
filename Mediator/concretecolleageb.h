#ifndef CONCRETECOLLEAGEB_H
#define CONCRETECOLLEAGEB_H

#include "colleage.h"
#include <QVariant>

class ConcreteColleageB : public Colleage {
  Q_OBJECT
public:
  explicit ConcreteColleageB(const QSharedPointer<Mediator> &mediator,
                             QObject *parent = nullptr);

  virtual void Action();
  virtual void SetState(const QVariant &state);
  virtual QVariant State();
signals:

public slots:
private:
  QVariant _state;
};

#endif // CONCRETECOLLEAGEB_H
