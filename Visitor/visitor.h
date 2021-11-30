#ifndef VISITOR_H
#define VISITOR_H

#include <QObject>
#include <QSharedPointer>

class Element;
class Visitor : public QObject {
  Q_OBJECT
public:
  explicit Visitor(QObject *parent = nullptr) : QObject(parent) {}

  virtual void Visit(Element *ele) = 0;
signals:

public slots:
};

#endif // VISITOR_H
