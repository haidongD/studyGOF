#ifndef CONCRETEITERATOR_H
#define CONCRETEITERATOR_H

#include "aggregate.h"
#include "iterator.h"

template <typename Object> class ConcreteIterator : public Iterator<Object> {
public:
  explicit ConcreteIterator(Aggregate<Object> *ag, int idx = 0)
      : _ag(ag), _idx(idx) {}

  virtual void First() { _idx = 0; }
  virtual void Next() {
    if (_idx < _ag->GetSize()) {
      ++_idx;
    }
  }
  virtual bool IsEnd() { return (_idx == _ag->GetSize()); }
  virtual Object CurrentItem() { return _ag->GetItem(_idx); }

private:
  Aggregate<Object> *_ag;
  int _idx;
};

#endif // CONCRETEITERATOR_H
