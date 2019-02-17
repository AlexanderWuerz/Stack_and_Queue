/**
 * Represents a generic queue.
 * Implemented using the SingleLinkedList generic class.
 */
package edu.duq.mathcs.COSC435; 

public class Queue<T> 
{
    /**
     * A queue is represented using a SingleLinkedList.
     */
    private SingleLinkedList<T> queue = new SingleLinkedList<T>();

    // IMPLEMENT BELOW GENERIC PUBLIC METHODS WITH THE FOLLOWING NAMES
    //   enqueue
	public void enqueue(T en) {
		queue.insertAtTail(en); 
	}
    //   dequeue
	public T dequeue() {
		return queue.removeAtHead(); 
	}
}
    
    
