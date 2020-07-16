#include "concrete_subject.h"
#include "concrete_observer.h"
#include "observer.h"
#include "subject.h"

int main() {
  Subject* subject = new ConcreteSubject("S");
  Observer* observerA = new ConcreteObserver("observerA");
  observerA->Observe(subject);
  Observer* observerB = new ConcreteObserver("observerB");
  observerB->Observe(subject);
  // 观察目标状态变更，所有观察者都会收到通知
  subject->SetState(1);
  return 0;
}
