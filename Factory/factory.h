#ifndef FACTORY_H
#define FACTORY_H

#include <QString>

class Product;

class Factory {
public:
  virtual Product *CreateProduct(const QString &id) = 0;
};

#endif // FACTORY_H
