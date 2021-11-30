#include "concretesubject.h"
#include <QDebug>

ConcreteSubject::ConcreteSubject(QObject *parent) : Subject(parent) {}

void ConcreteSubject::request() {
  qDebug() << __FUNCTION__ << "start";
  qDebug() << __FUNCTION__ << "end";
}
