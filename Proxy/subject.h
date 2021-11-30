#ifndef SUBJECT_H
#define SUBJECT_H

#include <QObject>

class Subject : public QObject {
  Q_OBJECT
public:
  explicit Subject(QObject *parent = nullptr) : QObject(parent) {}

  virtual void request() = 0;
signals:

public slots:
};

#endif // SUBJECT_H
