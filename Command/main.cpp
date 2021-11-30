#include "command.h"
#include "concreteinvoke.h"
#include "concretereciever.h"
#include "templatecommand.h"
#include <QCoreApplication>

/**
 * @brief main
 * Command模式关键就是提供一个抽象的Command类，并将执行操作封装到Command类接口中，
 * Command类中一般就是只是一些接口的集合，并不包含任何的数据属性
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  Reciever *reciever = new ConcreteReciever();
  QSharedPointer<Command> cmd(
      new SimpleCommand<Reciever>(reciever, &Reciever::HandleCmd));
  ConcreteInvoker invoke(cmd);
  invoke.Invoke("cmd param");

  return a.exec();
}
