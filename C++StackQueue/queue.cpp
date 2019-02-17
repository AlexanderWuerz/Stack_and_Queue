#include "queue.h"

  void queue::enqueue(int value) {
    // Simulate enqueue operation (add to queue) using this object's
    // linked list.
	q.insert_at_tail(value); 
  }
  int queue::dequeue() {
    // Simulate dequeue operation (remove from queue) using this
    // object's linked list.
	return q.remove_at_head(); 
  }

