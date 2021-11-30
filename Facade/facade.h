#ifndef FACADE_H
#define FACADE_H

#include <QObject>

class SubSystemA;
class SubSystemB;
class Facade : public QObject {
  Q_OBJECT
public:
  explicit Facade(QObject *parent = nullptr);

  void OperationWrapper();

protected:
signals:

public slots:
private:
  SubSystemA *_sub_a;
  SubSystemB *_sub_b;
};

#endif // FACADE_H
