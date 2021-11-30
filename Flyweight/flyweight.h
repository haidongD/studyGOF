#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include <QObject>

class Flyweight : public QObject {
  Q_OBJECT
public:
  explicit Flyweight(QObject *parent = nullptr) : QObject(parent) {}

  virtual void Operation() = 0;
signals:

public slots:
};

#endif // FLYWEIGHT_H
