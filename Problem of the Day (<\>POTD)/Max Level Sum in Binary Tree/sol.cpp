class Solution{
  public:
    int maxLevelSum(Node* root) {
       if(root==NULL)return 0;
       queue<Node*> q;
       int sum  = INT_MIN;
       q.push(root);
       while(!q.empty()){
           int size = q.size();
           int  levelSum =0;
           for(int i =0 ; i<size; i++){ // LEVEL SUM CALC
               Node* nn = q.front();
               q.pop();
               levelSum  += nn->data;
               if(nn->left != NULL){
                   q.push(nn->left);
               }
               if(nn->right != NULL){
                   q.push(nn->right);
               }
           }
               sum = max(sum , levelSum);
           }
           return sum;  
    }
};
