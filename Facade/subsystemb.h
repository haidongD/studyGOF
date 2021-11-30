#ifndef SUBSYSTEMB_H
#define SUBSYSTEMB_H

#include <QObject>

class SubSystemB : public QObject {
  Q_OBJECT
public:
  explicit SubSystemB(QObject *parent = nullptr);

  void operation();
signals:

public slots:
};

#endif // SUBSYSTEMB_H
