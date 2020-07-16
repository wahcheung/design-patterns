#include "concrete_observer.h"
#include <iostream>
#include "observer.h"
#include "subject.h"

ConcreteObserver::ConcreteObserver(std::string name) : Observer(name) {}

void ConcreteObserver::Observe(Subject* const subject) {
  subject_ = subject;
  subject->Attach(this);
}

void ConcreteObserver::Update(Subject* const theChangedSubject) {
  if (theChangedSubject == subject_) {
    state_ = subject_->GetState();
    std::cout << "Observer[" << Name() << "] ==> Subject[" << subject_->Name()
              << "] update to state[" << state_ << "]" << std::endl;
  } else {
    std::cout << "Invalid subject[" << theChangedSubject->Name()
              << "], not the observed subject[" << subject_->Name()
              << "]" << std::endl;
  }
}
