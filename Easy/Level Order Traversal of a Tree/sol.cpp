

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //printing the tree level by level
      //using recursion to solve this problem.
      vector <int> ans;
    if(node==NULL){
        return ans;
    }
    queue<Node*> q ;
    q.push(node);
    
    while(!q.empty()){
        
        Node* temp = q.front();
        q.pop();
        ans.push_back(temp->data);
        
        if(temp->left){
        	q.push(temp->left);
        }
        
        if(temp->right){
            q.push(temp->right);
        }
        
    }
    return ans;
    }
};
