
/**
 * Represents a generic stack.
 * Implemented using the SingleLinkedList generic class.
 */
package edu.duq.mathcs.COSC435; 

public class Stack<T> 
{
    /**
     * A stack is represented using a SingleLinkedList.
     */
    private SingleLinkedList<T> stack = new SingleLinkedList<T>();

    // IMPLEMENT BELOW GENERIC PUBLIC METHODS WITH THE FOLLOWING NAMES
    //   push
	public void push(T pu) {
		stack.insertAtHead(pu); 
	}
    //   pop
	public T pop() {
		return stack.removeAtHead(); 
	}
    
}
    
    
