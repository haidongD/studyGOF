#ifndef COMPONENT_H
#define COMPONENT_H

class Component {
public:
  enum ComponentType { Composite, Leaf };

  virtual void Operation() = 0;
  virtual ComponentType type() = 0;
  virtual void Add(Component *com) {}
  virtual void Remove(Component *com) {}
  virtual Component *GetChild(int index) { return nullptr; }
};

#endif // COMPONENT_H
