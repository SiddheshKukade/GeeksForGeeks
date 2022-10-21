class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
       //discover the node (seeing nodes and finding out thier connections)
       // visit the nodes 
       // V is the no of nodes
       //insert first in queue
       //remove it and add thier adjacent to thier queue
       
       vector <int> ans;
       queue<int> q;
       vector<int> vis(V,0);
       q.push(0);
       vis[0] = 1;
       
        while(!q.empty()){
        
            int td = q.front();
            q.pop();
            ans.push_back(td);
            
            for(auto x:adj[td]){
                if(!vis[x]){
                     vis[x] =1;
                     q.push(x);}
         }
        
    }
    return ans;
    }
};
