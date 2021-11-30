#ifndef ABSTRACTCLASS_H
#define ABSTRACTCLASS_H

#include <QObject>

class AbstractClass : public QObject {
  Q_OBJECT
public:
  explicit AbstractClass(QObject *parent = nullptr) : QObject(parent) {}

  /**
   * @brief TemplateMethod 功能框架
   */
  void TemplateMethod() {
    PrimitiveOperation1();
    PrimitiveOperation2();
  }

protected:
  /**
   * @brief PrimitiveOperation1 具体实现的形式1
   */
  virtual void PrimitiveOperation1() = 0;
  /**
   * @brief PrimitiveOperation2 具体实现的形式2
   */
  virtual void PrimitiveOperation2() = 0;
signals:

public slots:
};

#endif // ABSTRACTCLASS_H
