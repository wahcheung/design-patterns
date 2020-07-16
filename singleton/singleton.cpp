#include "singleton.h"
#include <iostream>

Singleton* Singleton::instance_ = nullptr;

Singleton* Singleton::Instance() {
  if (instance_ == nullptr) {
    instance_ = new Singleton();
  }
  return instance_;
}

void Singleton::DoSomething() {
  std::cout << "Hello, Singleton!" << std::endl;
}
