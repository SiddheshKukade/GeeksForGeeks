class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // code here
        set<int> un; /// autoaically stores the sorted values
        
        //insert all ele in set to remove duplicates
        while(head1 != NULL){
            un.insert(head1->data);
            head1= head1->next;
        }
        while(head2 != NULL){
            un.insert(head2->data);
            head2= head2->next;
        }
        // new link list.
        Node* head = new Node(*un.begin());
        Node* tail = head;
        for(auto x: un){ // over the set
            Node* temp = new Node(x); /// add that node
            tail->next= temp; // move to next;
            tail = temp;
        }
        return head->next;
    }
};
