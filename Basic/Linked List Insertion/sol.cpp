
class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       Node* node= new Node(x);
        if(head == NULL){
            return node;}
       node->next = head;
       head = node;
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
        Node* node= new Node(x);
        if(head==NULL){
            return node;
        }
        Node* it = head;
      while(it->next !=NULL){
          it = it->next;
      }
      it->next = node;
      node->next = NULL;
       return head;
    }
};
