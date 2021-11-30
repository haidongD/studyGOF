#ifndef ORIGINATOR_H
#define ORIGINATOR_H

#include <QObject>
#include <QSharedPointer>
#include <string>

using namespace std;

typedef string State;

class Memento;

class Originator : public QObject {
  Q_OBJECT
public:
  explicit Originator(const State &state, QObject *parent = nullptr);

  QSharedPointer<Memento> CreateMemento();
  void StoreMemento(const QSharedPointer<Memento> &memento);
  void RestoreToMemento(const QSharedPointer<Memento> &memento);
  void PrintState();
  void SetState(const State &state);
signals:

public slots:
private:
  State _state;
};

#endif // ORIGINATOR_H
