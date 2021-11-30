#ifndef SINGLETON_H
#define SINGLETON_H

#include <QMutex>

class Singleton {
public:
  static Singleton *GetInstance();
  static Singleton *GetInstance_s();

protected:
  Singleton();

private:
  static Singleton *_instance;
  static QMutex _mutex;
};

#endif // SINGLETON_H
