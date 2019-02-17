#include "single_linked_list.h"

  class queue {
  private:
    single_linked_list q;
  public:
    queue() { }
    void enqueue(int value);
    int dequeue();
  };

