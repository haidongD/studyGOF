#include "product.h"

#include <iostream>

using namespace std;

Product::Product() {
  ProducePart();
  cout << "return a product" << endl;
}

Product::~Product() {}

void Product::ProducePart() { cout << "build part of product.." << endl; }
