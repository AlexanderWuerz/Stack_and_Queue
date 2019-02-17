#include "single_linked_list.h"

  bool single_linked_list::empty() {
    // Return true iff "head" instance variable's value is 0.
	if (head == 0) 
		return true; 
	else 
		return false; 
  }

  void single_linked_list::insert_at_head(int contents)
  {
    // Create node on heap, add "contents" to this node, set link of
    // this node to the contents of "head" instance variable, set head
    // to point to the node we have created.
	node* heap_node = new node(); // create heap_node on the heap
	heap_node->contents = contents; // add "contents" to heap_node
	heap_node->link = head;  // set link of heap_node to "head" 
	head = heap_node; 
	//head->link = heap_node->link; 
  }
   
  void single_linked_list::insert_at_tail(int contents)
  {
    // Create a node on heap, add "contents" to node, and set node's
    // link to 0.  If list is empty, set "head" instance variable to
    // point to node.  Otherwise, search for the node that is
    // currently at the end of list, then set this end node's link to
    // point to the node we created above.
	node* heap_node = new node(); // create heap_node on the heap
	heap_node->contents = contents; // add "contents" to heap_node
	heap_node->link = 0; // set heap_node's link to 0
	if (this->empty()) {
		head = heap_node; 
	} else {
		node* last_node = new node(); 
		last_node = head; 
		while (last_node->link != 0)
			last_node = last_node->link; 
		/* Set temp_node's link to point to heap_node. */ 
		last_node->link = heap_node; 
	}
  }
  
  int single_linked_list::remove_at_head() 
  {
    // Create a variable that points to the first node in the list
    // (you can assume that this method is only called when the list
    // is non-empty).  Set "head" to point to whatever is pointed to
    // by the first node in the list (you can assume that there is a
    // first node, which might point to a second node or might have a
    // link value of 0 indicating the end of the list).  Retrieve the
    // first node's contents, delete (return to heap) the first node,
    // and return the retrieved contents.

	node* head_ptr = new node(); 
	head_ptr = head;
	head = head->link; 
	int first_contents = head_ptr->contents; 
	delete head_ptr; 
	return first_contents; 
  }



