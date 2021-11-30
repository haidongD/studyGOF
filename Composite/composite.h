#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "component.h"
#include <vector>

using namespace std;

class Composite : public Component {
public:
  Composite();

  virtual void Operation();
  virtual ComponentType type();
  virtual void Add(Component *com) override;
  virtual void Remove(Component *com) override;
  virtual Component *GetChild(int index) override;

private:
  vector<Component *> comVec;
};

#endif // COMPOSITE_H
