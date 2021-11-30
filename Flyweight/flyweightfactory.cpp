#include "flyweightfactory.h"
#include "concreteflyweight.h"
#include "concreteunshareflyweight.h"

FlyweightFactory::FlyweightFactory(QObject *parent) : QObject(parent) {}

FlyweightFactory::~FlyweightFactory() {
  {
    QMutexLocker lock(&_mutex);
    _pool.clear();
  }
}

QSharedPointer<Flyweight> FlyweightFactory::GetFlyweight(const QString &id) {

  QSharedPointer<Flyweight> share_ptr;
  if ("concreteflyweight" == id) {
    return getFlyweightFromPool<ConcreteFlyweight>(id);

  } else if ("concreteunshareflyweight" == id) {
    share_ptr = QSharedPointer<Flyweight>(new ConcreteUnshareFlyweight());
  }
  return share_ptr;
}
