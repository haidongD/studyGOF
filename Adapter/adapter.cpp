#include "adapter.h"
#include "adaptee.h"
#include <QDebug>

Adapter::Adapter(Adaptee *adaptee) : _adaptee(adaptee) {}

void Adapter::Request() {
  qDebug() << __FUNCTION__;
  _adaptee->SpecificRequest();
}
