class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        //using slow and fast pointer
        // when slow and fast pointer are at the same pos that means a pointer is present
        Node* slow = head;
        Node* fast= head;
        while(fast->next && fast->next->next){
            slow= slow->next;
            fast= fast->next->next;
            if(fast == slow){
             break;
            }
        }
       if(fast!=slow) return -1;
       slow=head;
       while(slow!=fast)
       {
               slow=slow->next;
               fast=fast->next;
        }
    return slow->data;
    }
};
