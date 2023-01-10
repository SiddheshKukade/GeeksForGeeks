class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int sum(Node *node)
    {
        if(node==NULL)
        return 0;
        
        int d= node->data; // Old Node data
        
        node->data = sum(node->left)  + sum(node->right); // sum of the childs
        
        return node->data+d; // final retring sum of current anad previous childrens 
        // Check test case    (4-2+12+6)
    }
    void  toSumTree(Node* node){
        sum(node);
    }
};
