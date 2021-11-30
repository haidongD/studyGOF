#include "refinedabstraction.h"
#include "abstractionimp.h"
#include <QDebug>

RefinedAbstraction::RefinedAbstraction(AbstractionImp *imp) : _imp(imp) {}

void RefinedAbstraction::Opration() {
  if (_imp) {
    _imp->Operation();
  }
  qDebug() << __FUNCTION__;
}
