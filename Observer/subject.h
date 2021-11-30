#ifndef SUBJECT_H
#define SUBJECT_H

#include "observer.h"
#include <QMutex>
#include <QObject>
#include <QVariant>
#include <QVector>

class Subject : public QObject {
  Q_OBJECT
public:
  ~Subject() {
    QMutexLocker lock(&_mutex);
    _vec_observers.clear();
  }

  virtual void notify() {
    QMutexLocker lock(&_mutex);
    auto it = _vec_observers.begin();
    while (it != _vec_observers.end()) {
      (*it)->update(*this);
      ++it;
    }
  }
  virtual void reg(const QSharedPointer<Observer> &observer) {
    QMutexLocker lock(&_mutex);
    if (!_vec_observers.contains(observer)) {
      _vec_observers.append(observer);
    }
  }
  virtual void unreg(const QSharedPointer<Observer> &observer) {
    QMutexLocker lock(&_mutex);
    _vec_observers.removeAll(observer);
  }
  virtual void setState(const QVariant &state) {
    QMutexLocker lock(&_mutex_state);
    _state = state;
  }
  virtual QVariant state() {
    QVariant state;
    {
      QMutexLocker lock(&_mutex_state);
      state = _state;
    }
    return state;
  }

protected:
  explicit Subject(QObject *parent = nullptr) : QObject(parent) {}

protected:
  QMutex _mutex_state;
  QVariant _state;
signals:
private:
  QVector<QSharedPointer<Observer>> _vec_observers;
  QMutex _mutex;
public slots:
};

#endif // SUBJECT_H
