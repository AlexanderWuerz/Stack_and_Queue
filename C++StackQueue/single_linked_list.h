#ifndef DEF_SLL
#define DEF_SLL 1
  class single_linked_list {
  private:

    // Private class representing nodes of the list
    class node {
    public:
      node *link;
      int contents;
    };
	
    // Instance variable
    node *head;

    // Methods
    //  Keep these private so only friends can use list class
    single_linked_list() { head = 0; }
    void insert_at_head(int);
    void insert_at_tail(int);
    int remove_at_head();
    bool empty();

    // These are our friend classes
    friend class stack;
    friend class queue;

  };

  #endif
