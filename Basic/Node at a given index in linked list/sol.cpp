// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list
int GetNth(struct node* head, int index){
  for(int i=1 ;i<index;i++){
      head=head->next;
  }
    return head->data;
}
