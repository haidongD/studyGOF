#include <QCoreApplication>

#include "concretefactory.h"
#include "product.h"
#include "singleton.h"

/**
 * @brief main
 * Factory模式的两个最重要的功能：
 * 1）定义创建对象的接口，封装了对象的创建；
 * 2）使得具体化类的工作延迟到了子类中。
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  auto singleton_s = Singleton::GetInstance_s();
  auto singleton = Singleton::GetInstance();
  Factory *factory = new ConcreteFactory();
  Product *product1 = factory->CreateProduct("ConcreteProduct1");
  Product *product2 = factory->CreateProduct("ConcreteProduct2");
  product1->Operation();
  product2->Operation();

  return a.exec();
}
