#include "subsystemb.h"
#include <QDebug>

SubSystemB::SubSystemB(QObject *parent) : QObject(parent) {}

void SubSystemB::operation() {
  qDebug() << __FUNCTION__ << "start";
  qDebug() << __FUNCTION__ << "end";
}
