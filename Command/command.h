#ifndef COMMAND_H
#define COMMAND_H

#include <QVariant>

class Command {
public:
  enum CommandType { Simple };
  virtual void Excute(const QVariant &param) = 0;

  virtual quint8 Type() = 0;
};

#endif // COMMAND_H
