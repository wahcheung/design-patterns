#pragma once

class Singleton {
 public:
  static Singleton* Instance();
  void DoSomething();

  // 新对象通过已有对象来创建时调用复制构造函数
  Singleton(const Singleton&) = delete;
  // 已有对象被赋予新值（新值来自另一个已有对象）时调用赋值构造函数
  Singleton& operator=(const Singleton&) = delete;

 private:
  static Singleton* instance_;
  Singleton() = default;
};
