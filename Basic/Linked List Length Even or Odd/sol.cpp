// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
    int  i =0;
    while(head !=NULL){
        i++;
        head= head->next;
    }
    return (i%2==0) ? 0 : 1;
}
