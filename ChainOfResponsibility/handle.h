#ifndef HANDLE_H
#define HANDLE_H

#include <QObject>
#include <QSharedPointer>

class Handle : public QObject {
  Q_OBJECT
public:
  virtual void HandleRequest() {
    if (_successor.isNull()) {
      RealHandleRequest();
    } else {
      _successor->HandleRequest();
    }
  }
  virtual void SetSuccessor(const QSharedPointer<Handle> &successor) {
    _successor = successor;
  }
signals:

public slots:
protected:
  explicit Handle(QObject *parent = nullptr)
      : QObject(parent), _successor(QSharedPointer<Handle>(nullptr)) {}
  QSharedPointer<Handle> _successor;
  virtual void RealHandleRequest() = 0;
};

#endif // HANDLE_H
