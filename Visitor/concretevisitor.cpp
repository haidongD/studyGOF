#include "concretevisitor.h"
#include <QDebug>

ConcreteVisitor::ConcreteVisitor(QObject *parent) : Visitor(parent) {}

void ConcreteVisitor::Visit(Element *ele) {
  qDebug() << QStringLiteral("已经获取到被拜访者的指针,可以进行新需求的实装");
}
