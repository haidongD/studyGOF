#ifndef CONTEXT_H
#define CONTEXT_H

#include <QObject>
#include <QSharedPointer>

class Strategy;

class Context : public QObject {
  Q_OBJECT
public:
  explicit Context(const QSharedPointer<Strategy> &share,
                   QObject *parent = nullptr);

  void doAction();

signals:

public slots:
private:
  QSharedPointer<Strategy> _share;
};

#endif // CONTEXT_H
