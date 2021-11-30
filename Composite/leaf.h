#ifndef LEAF_H
#define LEAF_H

#include "component.h"

class Leaf : public Component {
public:
  Leaf();

  virtual void Operation();
  virtual ComponentType type();
};

#endif // LEAF_H
