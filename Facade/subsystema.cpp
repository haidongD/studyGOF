#include "subsystema.h"
#include <QDebug>

SubSystemA::SubSystemA(QObject *parent) : QObject(parent) {}

void SubSystemA::Operation() {
  qDebug() << __FUNCTION__ << "start";
  qDebug() << __FUNCTION__ << "end";
}
