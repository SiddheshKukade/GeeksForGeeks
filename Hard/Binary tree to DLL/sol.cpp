// This function should return head to the DLL
class Solution
{
    public:
    //declaring globally because we are using recursion here
    Node* prev= NULL;
    Node* head=NULL;
    //Function to convert binary tree to doubly linked list and return it.
    Node * bToDLL(Node *root)
    {
        // calc inorder traversal of that binary tree and insert ele as DLL ele one by one.
        if(root == NULL) 
            return NULL;
        
        bToDLL(root->left); // LEFT
        
        if(prev==NULL) // it is the first element
        head= root; 
        else{ // it its not the first in the list
            root->left= prev;
            prev->right=root;
        }
        prev = root; // // set prev as the current element for future operations
        
        bToDLL(root->right); //RIGHT
        return head;
        
    }
};
