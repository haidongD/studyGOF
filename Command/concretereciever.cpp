#include "concretereciever.h"
#include <QDebug>

ConcreteReciever::ConcreteReciever(QObject *parent) : Reciever(parent) {}

void ConcreteReciever::HandleCmd(const quint8 &type, const QVariant &param) {
  qDebug() << __FUNCTION__ << "recived cmd type:" << type << ",param:" << param;
}
