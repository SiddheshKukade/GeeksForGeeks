class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* node) 
    {
        return isBSTUtil(node , INT_MIN , INT_MAX);
       
    }
    bool isBSTUtil(Node* node , int min , int max){
        //single node or no node is also bst
        if(node ==NULL){
            return true;
        }
        //if
        if(node->data <min || node->data > max){
            return false;
        }
        //equal  values  are not allowed in BST that's why we are doing -1 and +1
        return (isBSTUtil(node->left, min , node->data-1)&& 
        isBSTUtil(node->right, node->data +1 , max));
    }
};


        // if(node == NULL) 
        //     return 1 ;
        // if(node->left ==NULL||node->left->data > node->data){
        //     return 0;
        // }
        //   if(node->right ==NULL|| node->right->data < node->data){
        //     return 0;
        // }
        // if(!isBST(node->left ) || !isBST(node->right)){
        //     return 0;
        // }
        // return 1;
    //  if(!root) return true;
    //  bool left, right;
    // // if(isBST(root->left) && isBST(root->right)){ 
    // left = isBST(root->left);
    // right= isBST(root->right);
    // if(((root->left !=NULL) && (root->left->data > root->data ))){
    //         return false;
    //  }
    // if(root->right !=NULL && root->right->data < root->data){
    //     return false;
    // }
    //  return left && right;
    

