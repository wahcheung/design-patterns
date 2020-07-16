#pragma once

#include <string>

class Subject;

class Observer {
 public:
  Observer(std::string name);
  virtual ~Observer() = default;
  // 设定观察目标
  virtual void Observe(Subject* subject) = 0;
  // 观察目标更新时通过这个接口通知观察者
  virtual void Update(Subject* theChangedSubject) = 0;
  std::string Name();

 private:
  // 仅作为一个简单的标识，用于打印
  std::string name_;
};
