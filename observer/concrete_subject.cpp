#include "concrete_subject.h"
#include <string>

ConcreteSubject::ConcreteSubject(std::string name) : Subject(name) {};

int ConcreteSubject::GetState() {
  return state_;
}

void ConcreteSubject::SetState(int state) {
  state_ = state;
  Notify();
}
