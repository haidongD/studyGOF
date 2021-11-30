#ifndef STRATEGY_H
#define STRATEGY_H

#include <QObject>

class Strategy : public QObject {
  Q_OBJECT
public:
  explicit Strategy(QObject *parent = nullptr) : QObject(parent) {}

  virtual void algrithmInterface() = 0;
signals:

public slots:
};

#endif // STRATEGY_H
