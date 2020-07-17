#pragma once

#include "product.h"

class Factory {
 public:
  Factory() = default;
  virtual ~Factory() = default;
  virtual Product* FactoryMethod() = 0;
};
