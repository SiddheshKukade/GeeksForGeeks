class Solution{
  public:
    int solve(Node *root){
        if(root == NULL)
            return 0;
        return max(solve(root->left),solve(root->right)) +1;
    }
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        // Your code here
        return solve(root);
    }
};
