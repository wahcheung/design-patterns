#include "observer.h"

Observer::Observer(std::string name) {
  name_ = name;
}

std::string Observer::Name() {
  return name_;
}
