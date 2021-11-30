#ifndef ITERATOR_H
#define ITERATOR_H

template <typename Object> class Iterator {
public:
  explicit Iterator() {}
  virtual void First() = 0;
  virtual void Next() = 0;
  virtual bool IsEnd() = 0;
  virtual Object CurrentItem() = 0;
};

#endif // ITERATOR_H
