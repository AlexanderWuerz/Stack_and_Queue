// Order of inclusion of stack.h and queue.h should not matter.
// Note that single_linked_list.h is not included (at least, not directly) here.
#include "stack.h"
#include "queue.h"
#include <iostream>
using namespace std;

int main() {
  stack s;
  queue q;

  s.push(15);
  s.push(27);
  int a = s.pop();
  int b = s.pop();
  cout << a << ' ' << b << endl;
  cout << "Should be: 27 15" << endl;

  q.enqueue(15);
  q.enqueue(27);
  a = q.dequeue();
  b = q.dequeue();
  cout << a << ' ' << b << endl;
  cout << "Should be: 15 27" << endl;

  return 0;
}

