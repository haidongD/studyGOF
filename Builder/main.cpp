#include <QCoreApplication>

#include "concretebuilder.h"
#include "director.h"
#include "product.h"

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  Builder *builder = new ConcreteBuilder();

  //用户自定义构造产品
  Director *d = new Director(builder);
  d->Construct();

  //预定义构造产品
  auto product = builder->GetProduct();

  return a.exec();
}
