#include "concrete_factory.h"

int main() {
  Factory* factory = new ConcreteFactory();
  Product* product = factory->FactoryMethod();
  product->DoSomething();

  return 0;
}
