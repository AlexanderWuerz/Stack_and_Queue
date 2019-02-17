#include "stack.h"

  void stack::push(int value) {
    // Simulate push using this object's linked list
	s.insert_at_head(value); 
  }
  int stack::pop() {
    // Simulate pop using this object's linked list
	return s.remove_at_head(); 
  }

