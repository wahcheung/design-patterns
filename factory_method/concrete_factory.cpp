#include "concrete_factory.h"
#include "concrete_product.h"
#include "product.h"

Product* ConcreteFactory::FactoryMethod() {
  return new ConcreteProduct();
}
