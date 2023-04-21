
class Solution{

    public:
    int ladoos(Node* root, int home, int k)
    {
        // Your code goes here
        int ans=0;
        queue<Node*>q;
        q.push(root);
        Node* need;
        unordered_map<Node*, Node*> m;
        while(q.size()){
            int s = q.size();
            for(int i=0;i<s;i++){
                Node* temp = q.front();
                q.pop();
                if(temp->data==home) need=temp;
                if(temp->left){
                    q.push(temp->left);
                    m[temp->left] =temp;
                }
                if(temp->right){
                    q.push(temp->right);
                    m[temp->right]= temp;
                }
            }
        }
        unordered_map<Node*, bool> mm;
        q.push(need);
        int dis=0;
        ans=0;
        while(q.size()){
            int s = q.size();
            for(int i=0; i<s;i++){
                Node* temp = q.front();
                q.pop();
                mm[temp]=true;
                ans+=temp->data;
                if(temp->left && mm[temp->left]==false){
                    q.push(temp->left);
                }
                if(temp->right && mm[temp->right]==false){
                    q.push(temp->right);
                }
                if(m[temp] && mm[m[temp]]==false){
                    q.push(m[temp]);
                }
            }
            dis++;
            if(dis>k) break;
        }
        return ans;
    }
};
