#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include <QString>

class Prototype {
public:
  virtual ~Prototype();
  virtual Prototype *Clone() const = 0;

  void printAddrOfPointer(const QString &id);

protected:
  Prototype();

private:
};

#endif // PROTOTYPE_H
