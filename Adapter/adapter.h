#ifndef ADAPTER_H
#define ADAPTER_H

#include "target.h"

class Adaptee;

class Adapter : public Target {
public:
  Adapter(Adaptee *adaptee);

  virtual void Request();

private:
  Adaptee *_adaptee;
};

#endif // ADAPTER_H
