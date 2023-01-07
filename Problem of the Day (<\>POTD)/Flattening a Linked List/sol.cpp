
class Solution {
public:
Node* merge(Node * a , Node* b){
Node* dummy= new Node(0);
Node *temp = dummy;
    while(a && b){
        if(a->data < b->data){ // if second is bigger
            temp->bottom =a;  // add smaller a to bottom of dummy node
            temp = temp->bottom; //move pointer to next bottom
            a = a->bottom; // move a pointer to the bottom
        }else{
            temp->bottom =b; // add smaller a to bottom of dummy node
            temp= temp->bottom;
            b= b->bottom;
        }
    }
    // whichever exists between a and b add that to the bottom at last;
    if(a) temp->bottom =a; 
    if(b) temp->bottom=b;
    
    return dummy->bottom ;  // referring to the first bottom number
}
    Node *flatten(Node *root)
    {
        if(!root || !root->next){
	return root;}
	
	root->next = flatten(root->next); // recursively call to keep checking for next horizhontal pointers
	root = merge(root ,root->next);
	
	return root;
    }
};
 
