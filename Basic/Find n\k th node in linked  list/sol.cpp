int fractional_node(struct Node *head, int k)
{
 float N=0;
 Node* temp= head;
 while(temp!= NULL){
     N++;
     temp=temp->next;
 }
 temp = head;
 int sp =ceil(N/k);
// int sp;
//     if(N%k==0){

//         sp=N/k;

//     }

//     else{

//         sp=(N/k)+1;
//     }
 for(int i=1; i<sp; i++){
     temp = temp->next;
 }
 return temp->data;
}
