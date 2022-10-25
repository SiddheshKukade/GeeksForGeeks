Node* sortedInsert(Node * head, int x)
{
    Node *prev;
    Node *temp =head;
    Node *ptr = (struct Node* ) malloc(sizeof(struct Node));
    ptr->data =x ;
    ptr->prev = NULL;
    ptr->next = NULL;
    while(temp && temp->data <= x)
	{
	    prev = temp;
	    temp = temp->next;
	}
	if(temp == head){
	    //x is smaller than root
	    ptr->next = head;
	    head->prev = ptr;
	    head=ptr;
	}
	else if (temp ==NULL){
	    // we have reached to the end of the DLL
	    prev->next = ptr;
	    ptr->prev = prev;
	    ptr->next = NULL;
	}
	else{
	    // x belongs to the middlle in the list
	    prev->next = ptr;
	    ptr->prev =  prev;
	    ptr->next = temp ;
	    temp->prev = ptr;
	}
    // Node* temp = head;
    // while(temp->data < x){
    //     temp  = temp->next;
    // }
    // Node* node = (struct Node*) malloc(sizeof(struct Node));
    // node->data = x;
    // node->prev = NULL;
    // node->next = temp->next;
    // node->prev = temp;
    // temp->next = node;
    return head;
}
