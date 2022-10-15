
//Function to return a list containing the preorder traversal of the tree.
void pre(Node* root , vector<int> &ans){
  if(root){
  ans.push_back(root->data);
  pre(root->left, ans);
  pre(root->right, ans);
  }
}
vector <int> preorder(Node* root)
{
  vector<int> ans;
  pre(root, ans);
  return ans;
    
}
