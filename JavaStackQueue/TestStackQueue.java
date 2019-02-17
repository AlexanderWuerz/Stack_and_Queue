import edu.duq.mathcs.COSC435.*;

class TestStackQueue
{
  public static void main(String args[])
  {
    Stack<Integer> s = new Stack<Integer>();
    s.push(15);
    s.push(27);
    Integer s1 = s.pop();
    Integer s2 = s.pop();
    System.out.println(s1 + " " + s2);
    System.out.println("Should be: 27 15");
    
    Queue<String> q = new Queue<String>();
    q.enqueue("Hello World!");
    q.enqueue("S'long.");
    String q1 = q.dequeue();
    String q2 = q.dequeue();
    System.out.println(q1 + " " + q2);
    System.out.println("Should be: Hello World! S'long.");
    
    // Uncommenting following line should cause a compiler error.
    // SingleLinkedList<Integer> list = new SingleLinkedList<Integer>();
    return;
  }
}
