#include "concreteaggregate.h"
#include <QCoreApplication>
#include <QDebug>

/**
 * @brief main
 * Iterator模式正是用来解决对一个聚合对象的遍历问题，
 * 将对聚合的遍历封装到一个类中进行，这样就避免了暴露
 * 这个聚合对象的内部表示的可能。
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  QVector<int> datas{1, 2, 3, 4, 5, 6, 7, 8};
  Aggregate<int> *agg = new ConcreteAggregate<int>(datas);
  auto it = agg->CreateIterator();

  while (!it->IsEnd()) {
    qDebug() << it->CurrentItem();
    it->Next();
  }

  return a.exec();
}
