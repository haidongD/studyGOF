#include "proxy.h"
#include "subject.h"
#include <QDebug>

Proxy::Proxy(const QSharedPointer<Subject> &share_ptr, QObject *parent)
    : QObject(parent), _share_ptr(share_ptr) {}

void Proxy::request() {
  qDebug() << __FUNCTION__ << "start";
  _share_ptr->request();
  qDebug() << __FUNCTION__ << "end";
}
