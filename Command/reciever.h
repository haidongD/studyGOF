#ifndef RECIEVER_H
#define RECIEVER_H

#include <QObject>

class Reciever : public QObject {
  Q_OBJECT
public:
  explicit Reciever(QObject *parent = nullptr) : QObject(parent) {}

  virtual void HandleCmd(const quint8 &type, const QVariant &param) = 0;

signals:

public slots:
};

#endif // RECIEVER_H
