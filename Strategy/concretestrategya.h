#ifndef CONCRETESTRATEGYA_H
#define CONCRETESTRATEGYA_H

#include "strategy.h"

class ConcreteStrategyA : public Strategy {
  Q_OBJECT
public:
  explicit ConcreteStrategyA(QObject *parent = nullptr);

  virtual void algrithmInterface();
signals:

public slots:
};

#endif // CONCRETESTRATEGYA_H
