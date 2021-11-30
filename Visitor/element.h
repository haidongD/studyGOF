#ifndef ELEMENT_H
#define ELEMENT_H

#include <QObject>
#include <QSharedPointer>

class Visitor;

class Element : public QObject {
  Q_OBJECT
public:
  explicit Element(QObject *parent = nullptr) : QObject(parent) {}
  virtual void Accept(const QSharedPointer<Visitor> &vistor) = 0;

signals:

public slots:
};

#endif // ELEMENT_H
