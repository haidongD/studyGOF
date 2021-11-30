#ifndef DECORATOR_H
#define DECORATOR_H

#include "component.h"

class Decorator : public Component {
public:
  Decorator(Component *com) : _com(com) {}

protected:
  Component *_com;
};

#endif // DECORATOR_H
