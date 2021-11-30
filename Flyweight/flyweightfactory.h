#ifndef FLYWEIGHTFACTORY_H
#define FLYWEIGHTFACTORY_H

#include "flyweight.h"
#include <QMap>
#include <QMutex>
#include <QObject>
#include <QSharedPointer>

class FlyweightFactory : public QObject {
  Q_OBJECT
public:
  explicit FlyweightFactory(QObject *parent = nullptr);
  ~FlyweightFactory();

  QSharedPointer<Flyweight> GetFlyweight(const QString &id);
signals:

public slots:
private:
  QMutex _mutex;
  QMap<QString, QSharedPointer<Flyweight>> _pool;

private:
  template <class T>
  QSharedPointer<Flyweight> getFlyweightFromPool(const QString &id) {
    QSharedPointer<Flyweight> share_ptr;
    {
      QMutexLocker lock(&_mutex);
      if (_pool.contains(id)) {
        share_ptr = _pool.value(id);
      } else {
        share_ptr = QSharedPointer<Flyweight>(new T());
        _pool.insert(id, share_ptr);
      }
    }
    return share_ptr;
  }
};

#endif // FLYWEIGHTFACTORY_H
