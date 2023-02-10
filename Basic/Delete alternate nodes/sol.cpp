void deleteAlt(struct Node *head){
    if(head == NULL){
        return ;
    }
      Node *prev = head; 
    Node *node = head->next; 
    while(node != NULL && prev != NULL){
            prev->next = node->next;
            delete(node);
            prev=prev->next;
             if (prev != NULL) 
                    node = prev->next; 
    }
}
