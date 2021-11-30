#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <QObject>

class Mediator : public QObject {
  Q_OBJECT
public:
  explicit Mediator(QObject *parent = nullptr) : QObject(parent) {}

  virtual void DoActionFromAToB() = 0;
  virtual void DoActionFromBToA() = 0;
signals:

public slots:
};

#endif // MEDIATOR_H
