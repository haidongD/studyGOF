#include "adaptee.h"
#include <QDebug>

Adaptee::Adaptee() {}

void Adaptee::SpecificRequest() { qDebug() << __FUNCTION__; }
