#ifndef PROXY_H
#define PROXY_H

#include <QObject>
#include <QSharedPointer>

class Subject;

class Proxy : public QObject {
  Q_OBJECT
public:
  explicit Proxy(const QSharedPointer<Subject> &share_ptr,
                 QObject *parent = nullptr);

  void request();
signals:

public slots:
private:
  QSharedPointer<Subject> _share_ptr;
};

#endif // PROXY_H
