#ifndef CONCRETECOLLEAGEA_H
#define CONCRETECOLLEAGEA_H

#include "colleage.h"
#include <QVariant>

class ConcreteColleageA : public Colleage {
  Q_OBJECT
public:
  explicit ConcreteColleageA(const QSharedPointer<Mediator> &mediator,
                             QObject *parent = nullptr);

  virtual void Action();
  virtual void SetState(const QVariant &state);
  virtual QVariant State();
signals:

public slots:
private:
  QVariant _state;
};

#endif // CONCRETECOLLEAGEA_H
