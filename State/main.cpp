#include <QCoreApplication>

#include "Context.h"
#include "State.h"
#include "concretestatea.h"
#include <iostream>
using namespace std;

/**
 * @brief main
 * State模式很好地实现了对象的状态逻辑和动作实现的分离，
 * 状态逻辑分布在State的派生类中实现，而动作实现则可以
 * 放在Context类中实现（这也是为什么State派生类需要拥
 * 有一个指向Context的指针）。这使得两者的变化相互独立，
 * 改变State的状态逻辑可以很容易复用Context的动作，也
 * 可以在不影响State派生类的前提下创建Context的子类来
 * 更改或替换动作实现。
 * State模式问题主要是逻辑分散化，状态逻辑分布到了很多
 * 的State的子类中，很难看到整个的状态逻辑图，这也带来
 * 了代码的维护问题。
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  State *st = new ConcreteStateA();
  Context *con = new Context(st);
  con->OperationChangState();
  con->OperationChangState();
  con->OperationChangState();
  if (con != NULL)
    delete con;
  if (st != NULL)
    st = NULL;

  return a.exec();
}
