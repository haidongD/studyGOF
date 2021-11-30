#include "composite.h"
#include "leaf.h"
#include <QCoreApplication>
#include <QDebug>

/**
 * @brief main
 * 要递归构建树状的组合结构，Composite模式则提供了很好的解决方案
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  Component *composite = new Composite();
  Component *leaf = new Leaf();
  leaf->Operation();
  composite->Add(leaf);
  composite->Operation();
  auto child = composite->GetChild(0);
  child->Operation();
  composite->Remove(leaf);

  return a.exec();
}
