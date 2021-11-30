#include "memento.h"
#include <QCoreApplication>

/**
 * @brief main
 * Memento模式的关键就是要在不破坏封装行的前提下，
 * 捕获并保存一个类的内部状态，这样就可以利用该保
 * 存的状态实施恢复操作
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  //初始化操作对象
  Originator ori("init");
  ori.PrintState();

  //创建快照
  auto memento = ori.CreateMemento();

  //设置新状态前快照
  ori.StoreMemento(memento);
  ori.SetState("state1");
  ori.PrintState();

  //恢复快照
  ori.RestoreToMemento(memento);
  ori.PrintState();

  return a.exec();
}
