#ifndef CONCRETEFACTORY_H
#define CONCRETEFACTORY_H

#include "factory.h"

class ConcreteFactory : public Factory {
public:
  ConcreteFactory();

  virtual Product *CreateProduct(const QString &id);
};

#endif // CONCRETEFACTORY_H
