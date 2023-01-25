
class Solution {
public:
    int subtree(Node* root, int &ans){
        if(root==NULL){
            return 0;}
        if(root->left == NULL and root->right == NULL){
            return root->data;
        }
        int ls = subtree(root->left, ans);
        int rs = subtree(root->right, ans);
        
        if(root->left and root->right){
            ans = max(ans, ls+rs+root->data);
            return max(ls,rs)+root->data;
        }
        if(root->left)
        {
            return ls+root->data;
        }
        return rs+ root->data;
    }
 int solve(Node * root,int &res)
    {
        if(root==NULL)  return 0;
        
        if(root->left==NULL && root->right==NULL)  return root->data;
        
        int l=solve(root->left,res);
        int r=solve(root->right,res);
        
        int temp;
        
        if(root->left !=NULL && root->right!=NULL)
        {
             temp=max(l,r)+root->data;
             res=max(res,l+r+root->data);
             return temp;
        }
        
       else if(root->left==NULL)
        {
            temp=r+root->data;
            return temp;
        }
        else if(root->right==NULL)
        {
            temp=l+root->data;
            return temp;
        }
    }
    int maxPathSum(Node* root)
    {
        // code here
        // int ans = INT_MIN;
        // int x =subtree(root, ans); // max values at left and right sub tree of the root
        // if(ans == INT_MIN){
        //     return x;
        // }
        // return ans;
          // code here
        int res=INT_MIN;
        int x = solve(root,res);
       
        if(root->left!=NULL && root->right!=NULL)
        return res;
        if(root->left==NULL || root->right==NULL)
        return max(res,x);
    }
};
