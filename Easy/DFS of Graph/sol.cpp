class Solution {
  public:
    // Function to return a list  class Solution {
    vector<int> v ;
    void solve(int src, vector<int>&vis,vector<int> adj[]){
        vis[src] = 1;
        v.push_back(src);
        for(auto x:adj[src]){
            if(!vis[x]){
                solve(x,vis,adj);
            }
        }
    }
        // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        v.clear(); // removes all elements of the vector
        vector <int> vis(V,0);
        solve(0,vis,adj);
        return v;
    }

};
