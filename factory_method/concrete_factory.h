#pragma once

#include "factory.h"
#include "product.h"

class ConcreteFactory : public Factory {
 public:
  ConcreteFactory() = default;
  virtual ~ConcreteFactory() = default;

  Product* FactoryMethod() override;
};
