#ifndef CONCRETEAGGREGATE_H
#define CONCRETEAGGREGATE_H

#include "aggregate.h"
#include "concreteiterator.h"
#include <QVector>

template <typename Object> class ConcreteAggregate : public Aggregate<Object> {
public:
  enum { SIZE = 3 };
  ConcreteAggregate(const QVector<Object> &datas) : _realsize(datas.size()) {
    _realsize = (_realsize > SIZE) ? SIZE : _realsize;
    for (auto i = 0; i < _realsize; ++i) {
      _objs[i] = datas.at(i);
    }
  }

  virtual Iterator<Object> *CreateIterator() {
    return new ConcreteIterator<Object>(this);
  }
  /**
   * @brief GetItem 由调用者保证idx不越界
   * @param idx
   * @return
   */
  virtual Object GetItem(int idx) { return _objs[idx]; }
  virtual int GetSize() { return _realsize; }

protected:
  Object _objs[SIZE];
  int _realsize;
};

#endif // CONCRETEAGGREGATE_H
