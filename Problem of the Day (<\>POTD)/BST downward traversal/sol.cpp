
class Solution{
public:
    long long int verticallyDownBST(Node *root,int target){
        //1. search the target node
        // Horizhontal Level order traversal
        queue<Node*> q;
        q.push(root);
        long long ans =0;
        Node* tar=NULL;
        while(!q.empty()){
            Node* node = q.front();
            q.pop();
            if(node->data == target){
                tar = node;
                break;
            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        if (tar == NULL) return -1; // target not found in the tree default case
        queue<pair<Node*, int>>x;
        /**
         * For
         * [Node, int]
           [32, -1]
           [30, +1]
           [..] 
        */
        if(tar->left){
                x.push({tar->left,-1});
            }
            if(tar->right){
                x.push({tar->right,+1});
            }
         while(!x.empty()){
             auto it = x.front();
             x.pop();
             Node *node= it.first;
             int level = it.second;
             if(level==0){
                 ans += node->data; // we are at the center
             }
             if(node->left){
                 x.push({node->left, level-1});
             }
             if(node->right){
                 x.push({node->right, level+1});
             }
        }
        return  ans;
        // return the sum of child of target nodes
        // if left moved then +1
        // if right moved then -1
        // if 0 is found that means we are at the center
        
    }
};
