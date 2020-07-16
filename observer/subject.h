#pragma once

#include <string>
#include <vector>
#include "observer.h"

// 观察目标抽象类
class Subject {
 public:
  Subject() = default;
  Subject(std::string name);
  virtual ~Subject() = default;

  // 注册观察者
  void Attach(Observer* const observer);
  // 注销观察者
  void Detach(Observer* const observer);
  // 通知观察者
  void Notify();

  virtual int GetState() = 0;
  virtual void SetState(int state) = 0;

  std::string Name();

 private:
  // 仅作为一个简单的标识，用于打印
  std::string name_;
  // 观察者名单
  // 析构函数不会销毁vector里面这些普通指针指向的对象，除非用智能指针
  std::vector<Observer*> observers_;
};
