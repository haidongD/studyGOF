#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H

#include "subject.h"

class ConcreteSubject : public Subject {
  Q_OBJECT
public:
  explicit ConcreteSubject(QObject *parent = nullptr);
  virtual void request();
signals:

public slots:
};

#endif // CONCRETESUBJECT_H
