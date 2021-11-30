#include "concretefactory.h"

#include "concreteproduct1.h"
#include "concreteproduct2.h"

ConcreteFactory::ConcreteFactory() {}

Product *ConcreteFactory::CreateProduct(const QString &id) {
  if ("ConcreteProduct1" == id) {
    return new ConcreteProduct1();
  } else if ("ConcreteProduct2" == id) {
    return new ConcreteProduct2();
  } else {
    return nullptr;
  }
}
