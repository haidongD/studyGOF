#ifndef MEMENTO_H
#define MEMENTO_H

#include "originator.h"

class Memento : public QObject {
  Q_OBJECT
private:
  friend class Originator;
  explicit Memento(const State &state, QObject *parent = nullptr);

  State state();
  void setState(const State &state);

signals:

public slots:
private:
  State _state;
};

#endif // MEMENTO_H
