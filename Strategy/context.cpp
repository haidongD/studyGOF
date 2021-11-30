#include "context.h"
#include "strategy.h"
#include <QDebug>

Context::Context(const QSharedPointer<Strategy> &share, QObject *parent)
    : QObject(parent), _share(share) {}

void Context::doAction() {
  qDebug() << __FUNCTION__ << "start";
  _share->algrithmInterface();
  qDebug() << __FUNCTION__ << "end";
}
