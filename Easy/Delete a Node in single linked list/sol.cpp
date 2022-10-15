Node* deleteNode(Node *head,int x)
{
    if(x==1) return head->next;   
    Node* temp;
    Node* head2=head; 
    if(head!=NULL){
        for(int i=1; i<x;i++){
            temp = head2;
            head2= head2->next;
        }    
        temp->next = head2->next;
    }
    return head;
}
