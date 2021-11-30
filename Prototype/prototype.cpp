#include "prototype.h"
#include <QDebug>

Prototype::~Prototype() {}

void Prototype::printAddrOfPointer(const QString &id) {
  qDebug() << id << ":" << this;
}

Prototype::Prototype() {}
