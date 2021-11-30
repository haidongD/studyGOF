#ifndef CONCRETEINVOKE_H
#define CONCRETEINVOKE_H

#include "invoker.h"

class ConcreteInvoker : public Invoker {
  Q_OBJECT
public:
  explicit ConcreteInvoker(const QSharedPointer<Command> &cmd,
                           QObject *parent = nullptr);

signals:

public slots:
};

#endif // CONCRETEINVOKE_H
