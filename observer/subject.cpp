#include "subject.h"
#include <algorithm>
#include <string>
#include <vector>

Subject::Subject(std::string name) {
  name_ = name;
}

void Subject::Attach(Observer* const observer) {
  observers_.push_back(observer);
}

void Subject::Detach(Observer* const observer) {
  #if 0
  for (std::vector<Observer*>::iterator it = observers_.begin();
       it != observers_.end(); ++it) {
    if (*it == observer) {
      observers_.erase(it);
    }
  }
  #else
  observers_.erase(std::remove(observers_.begin(), observers_.end(), observer),
                   observers_.end());
  #endif
}

void Subject::Notify() {
  for (auto* observer : observers_) {
    observer->Update(this);
  }
}

std::string Subject::Name() {
  return name_;
}
