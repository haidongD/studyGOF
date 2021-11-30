#ifndef SIMPLECOMMAND_H
#define SIMPLECOMMAND_H

#include "command.h"

template <class Reciever> class TemplateCommand : public Command {
public:
  using Action = void (Reciever::*)(const quint8 &Type, const QVariant &param);

  explicit TemplateCommand(Reciever *rev, Action act) : _rev(rev), _act(act) {}
  ~TemplateCommand() {
    if (_rev) {
      delete _rev;
      _rev = nullptr;
    }
  }

  virtual void Excute(const QVariant &param) { (_rev->*_act)(Type(), param); }

  virtual quint8 Type() = 0;
signals:

public slots:
protected:
  Reciever *_rev;
  Action _act;
};

template <class Reciever>
class SimpleCommand : public TemplateCommand<Reciever> {
public:
  SimpleCommand(Reciever *rev, Action act) : TemplateCommand(rev, act) {}
  virtual quint8 Type() { return Simple; }
};

#endif // SIMPLECOMMAND_H
