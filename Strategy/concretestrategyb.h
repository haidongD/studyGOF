#ifndef CONCRETESTRATEGYB_H
#define CONCRETESTRATEGYB_H

#include "strategy.h"

class ConcreteStrategyB : public Strategy {
  Q_OBJECT
public:
  explicit ConcreteStrategyB(QObject *parent = nullptr);

  virtual void algrithmInterface();
signals:

public slots:
};

#endif // CONCRETESTRATEGYB_H
