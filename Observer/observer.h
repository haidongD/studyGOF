#ifndef OBSERVER_H
#define OBSERVER_H

#include <QObject>
#include <QSharedPointer>

class Subject;

class Observer : public QObject {
  Q_OBJECT
public:
  explicit Observer(QObject *parent = nullptr) : QObject(parent) {}

  virtual void update(const Subject &pub) = 0;
  virtual void subscription(const QSharedPointer<Subject> &pub);
  virtual void unsubscription(const QSharedPointer<Subject> &pub);
signals:

public slots:
};

#endif // OBSERVER_H
