#ifndef AGGREGATE_H
#define AGGREGATE_H

#include "iterator.h"

template <typename Object> class Aggregate {

public:
  explicit Aggregate() {}
  virtual ~Aggregate() {}
  virtual Iterator<Object> *CreateIterator() = 0;
  virtual Object GetItem(int idx) = 0;
  virtual int GetSize() = 0;
};

#endif // AGGREGATE_H
