#ifndef CONCRETERECIEVER_H
#define CONCRETERECIEVER_H

#include "reciever.h"

class ConcreteReciever : public Reciever {
  Q_OBJECT
public:
  explicit ConcreteReciever(QObject *parent = nullptr);

  virtual void HandleCmd(const quint8 &type, const QVariant &param);

signals:

public slots:
};

#endif // CONCRETERECIEVER_H
