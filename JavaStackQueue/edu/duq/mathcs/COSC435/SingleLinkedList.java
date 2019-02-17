
/**
 * A generic class representing singly-linked lists.
 */
package edu.duq.mathcs.COSC435; 

class SingleLinkedList<T>
{
  
  /**
   * Nested class (functionally, a struct) representing a 
   * list node. 
   */
  private class Node {
    /**
     * Link to next node in the list, or <tt>null</tt> if 
     *  this node is at the end of the list.
     */
    Node link;
    
    /** Data stored in this node. */
    T contents;
  }
  
  /** Reference to the beginning0 of the list. 
    * This should be the only instance variable (no tail variable). */
  private Node head = null;
  
  // FILL IN GENERIC PUBLIC METHODS BELOW, WITH NAMES
  //   isEmpty
  public boolean isEmpty() {
	  if (head == null)
		  return true; 
	  else 
		  return false; 
  }
  //   insertAtHead
  public void insertAtHead(T contents) {
	  Node insert_node = new Node(); 
	  insert_node.contents = contents; 
	  insert_node.link = head; 
	  head = insert_node; 
  }
  //   insertAtTail
  public void insertAtTail(T contents) {
	Node insert_node = new Node(); 
	insert_node.contents = contents; 
	insert_node.link = null; 

	if (this.isEmpty()) {
		head = insert_node; 
	} else {
		Node last_node = new Node(); 
		last_node = head; 
		while (last_node.link != null) 
			last_node = last_node.link; 
		last_node.link = insert_node; 
	}
  }
  //   removeAtHead
  public T removeAtHead() {
	Node head_node = new Node(); 
	head_node = head; 
	head = head_node.link; 
	return head_node.contents; 
  }
  // See C++ single_linked_list.cpp file for outlines
  // of processing for each method.
  
}
