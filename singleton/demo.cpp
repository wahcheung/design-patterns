#include "singleton.h"

int main() {
  #if 0
  Singleton* singleton = Singleton::Instance();
  singleton->DoSomething();
  #else
  Singleton::Instance()->DoSomething();
  #endif

  return 0;
}
