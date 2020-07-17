#pragma once

#include "product.h"

class ConcreteProduct : public Product {
 public:
  ConcreteProduct() = default;
  virtual ~ConcreteProduct() = default;

  void DoSomething();
};
