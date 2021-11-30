#ifndef SUBSYSTEMA_H
#define SUBSYSTEMA_H

#include <QObject>

class SubSystemA : public QObject {
  Q_OBJECT
public:
  explicit SubSystemA(QObject *parent = nullptr);

  void Operation();
signals:

public slots:
};

#endif // SUBSYSTEMA_H
