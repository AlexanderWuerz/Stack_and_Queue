#include "single_linked_list.h"

  class stack {
  private:
    single_linked_list s;
  public:
    stack() { }
    void push(int value);
    int pop();
  };

