#pragma once

class Product {
 public:
  Product() = default;
  virtual ~Product() = default;
  virtual void DoSomething() {}
};
