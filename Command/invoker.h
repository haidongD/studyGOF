#ifndef INVOKER_H
#define INVOKER_H

#include "command.h"
#include <QObject>
#include <QSharedPointer>

class Invoker : public QObject {
  Q_OBJECT
public:
  virtual void Invoke(const QVariant &param) {
    if (!_cmd.isNull()) {
      _cmd->Excute(param);
    }
  }
signals:

public slots:
protected:
  explicit Invoker(const QSharedPointer<Command> &cmd,
                   QObject *parent = nullptr)
      : QObject(parent), _cmd(cmd) {}

protected:
  QSharedPointer<Command> _cmd;
};

#endif // INVOKER_H
