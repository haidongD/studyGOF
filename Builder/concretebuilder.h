#ifndef CONCRETEBUILDER_H
#define CONCRETEBUILDER_H

#include "builder.h"

class ConcreteBuilder : public Builder {
 public:
  ConcreteBuilder();
  ~ConcreteBuilder();
  void BuildPartA(const string& buildPara);
  void BuildPartB(const string& buildPara);
  void BuildPartC(const string& buildPara);
  Product* GetProduct();
};

#endif  // CONCRETEBUILDER_H
