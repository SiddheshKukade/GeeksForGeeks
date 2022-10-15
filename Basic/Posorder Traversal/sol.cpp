
void post(Node* root, vector<int> & ans){
    if(root){
        post(root->left, ans);
        post(root->right, ans);
        ans.push_back(root->data);
    }
}
//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  vector <int> ans ;
  post(root ,ans);
  return ans;
}
