#include "facade.h"
#include "subsystema.h"
#include "subsystemb.h"
#include <QDebug>

Facade::Facade(QObject *parent)
    : QObject(parent), _sub_a(new SubSystemA(this)),
      _sub_b(new SubSystemB(this)) {}

void Facade::OperationWrapper() {
  qDebug() << __FUNCTION__ << "start";
  _sub_a->Operation();
  _sub_b->operation();
  qDebug() << __FUNCTION__ << "end";
}
