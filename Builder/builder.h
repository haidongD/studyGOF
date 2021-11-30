#ifndef BUILDER_H
#define BUILDER_H

#include <string>

using namespace std;

class Product;

class Builder {
 public:
  virtual ~Builder();
  virtual void BuildPartA(const string& buildPara) = 0;
  virtual void BuildPartB(const string& buildPara) = 0;
  virtual void BuildPartC(const string& buildPara) = 0;
  virtual Product* GetProduct() = 0;

 protected:
  Builder();
};

#endif  // BUILDER_H
