#pragma once

#include "subject.h"
#include <string>

class ConcreteSubject : public Subject {
 public:
  ConcreteSubject() = default;
  ConcreteSubject(std::string);
  virtual ~ConcreteSubject() = default;

  int GetState() override;
  // 更新自身状态，观察者设计模式的核心体现在这个函数的实现
  void SetState(int state) override;

 private:
  int state_;
};
