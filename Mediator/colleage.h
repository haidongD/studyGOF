#ifndef COLLEAGE_H
#define COLLEAGE_H

#include <QObject>
#include <QSharedPointer>

class Mediator;

class Colleage : public QObject {
  Q_OBJECT
public:
  explicit Colleage(const QSharedPointer<Mediator> &mediator,
                    QObject *parent = nullptr)
      : QObject(parent), _mediator(mediator) {}
  virtual void Action() = 0;
  virtual void SetState(const QVariant &state) = 0;
  virtual QVariant State() = 0;

signals:

public slots:
protected:
  QSharedPointer<Mediator> _mediator;
};

#endif // COLLEAGE_H
