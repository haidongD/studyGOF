#include "concreteinvoke.h"

ConcreteInvoker::ConcreteInvoker(const QSharedPointer<Command> &cmd,
                                 QObject *parent)
    : Invoker(cmd, parent) {}
