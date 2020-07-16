#pragma once

#include "observer.h"
#include <string>
#include "concrete_subject.h"

class ConcreteObserver : public Observer {
 public:
  ConcreteObserver() = default;
  ConcreteObserver(std::string name);
  virtual ~ConcreteObserver() = default;

  // 设定观察目标
  void Observe(Subject* const subject) override;
  // 观察目标更新时通过这个接口通知观察者
  void Update(Subject* const subject) override;

 private:
  Subject* subject_ = nullptr;
  int state_;
};
