#include "singleton.h"
#include <QDebug>

Singleton *Singleton::_instance = nullptr;
QMutex Singleton::_mutex;

Singleton *Singleton::GetInstance() {
  qDebug() << __FUNCTION__;
  if (nullptr == _instance) {
    _instance = new Singleton();
  }
  return _instance;
}

Singleton *Singleton::GetInstance_s() {
  qDebug() << __FUNCTION__;
  if (nullptr == _instance) {
    QMutexLocker locker(&_mutex);
    if (nullptr == _instance) {
      _instance = new Singleton();
    }
  }
  return _instance;
}

Singleton::Singleton() { qDebug() << __FUNCTION__; }
