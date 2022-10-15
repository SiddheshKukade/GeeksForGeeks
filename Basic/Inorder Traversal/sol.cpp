
class Solution {
  public:
    void ino(Node* root , vector<int> &ans){
       if(root){
         ino(root->left , ans);
         ans.push_back(root->data);
         ino(root->right ,ans);
       }
    }
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
     vector<int> ans;
     ino(root, ans);
     return ans;
    }
};
