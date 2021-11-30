#ifndef CONCRETECLASS2_H
#define CONCRETECLASS2_H

#include "abstractclass.h"

class ConcreteClass2 : public AbstractClass {
  Q_OBJECT
public:
  explicit ConcreteClass2(QObject *parent = nullptr);

protected:
  /**
   * @brief PrimitiveOperation1 具体实现的形式1
   */
  virtual void PrimitiveOperation1();
  /**
   * @brief PrimitiveOperation2 具体实现的形式2
   */
  virtual void PrimitiveOperation2();
signals:

public slots:
};

#endif // CONCRETECLASS2_H
