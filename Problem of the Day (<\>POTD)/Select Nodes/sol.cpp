
class Solution{
  public:
    void dfs(const vector<vector<int>>& nodes, const int src, const int par, vector<pair<int, int>>& dp) {
    	for (const auto & i : nodes[src]){
    		if (i != par) // if parent then skip it 
    		dfs(nodes, i, src, dp); // calling dfs on all possible child nodes
    	}
    	for (const auto& i : nodes[src]){
    		if (i != par) { // if parent then skip it 
    			dp[src].first += dp[i].second; //add second to the first
    			dp[src].second += min(dp[i].first, dp[i].second); 
    			// check what is min between first or second.
    	    }
    	}
    }   

    int countVertex(int N, vector<vector<int>>edges){
    	vector<vector<int>> nodes(N);
    	for (const auto & e : edges) {
    		nodes[e[0] - 1].push_back(e[1] - 1);
    		nodes[e[1] - 1].push_back(e[0] - 1);
    	}
    	vector<pair<int, int>> dp(N, { 0, 1 });
    	dfs(nodes, 0, 0, dp);
    	return min(dp[0].first, dp[0].second);
    }
}; 
