class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool checkCycle(int node,  vector<int> adj[], int vis[], int dfsVis[]){
        vis[node] =1 ;
        dfsVis[node] =1 ;
        for(auto it: adj[node]){
            // IF NORMAL AND DFS LIST FOR THAT NODE IS VISITED THEN IT IS A CYCLCE
            if(!vis[it]){ // IF NOT visited then visit it by calling function on that
              if(checkCycle(it, adj, vis,dfsVis)) return true;   // if previous was true then return true
            }else if(dfsVis[it]){ // if dfs is also visited then we can return true
                return true;
            }
        }
        //  IF ALL ARE ITERATED OR IF NO MORE ADJACENTS AND TRUE IS ALSO NOT RETRNED 
        // THEN WE CAN SAY THAT THE CYCLE IS NOT PRESENT 
        // SO REMOVE THE CURRENT NODE FROM DSFVIS LIST AND RETURN FALSE;
        //if it not cycle
        dfsVis[node] = 0; // returning as false and setting the current node asa zero 
        return false;
    }
    bool isCyclic(int N, vector<int> adj[]) {
        int vis[N] , dfsVis[N];
        memset(vis , 0 , sizeof vis);
        memset(dfsVis, 0  ,sizeof dfsVis);
        for(int i=0 ; i<N; i++){
            if(!vis[i]){
                if(checkCycle(i , adj, vis, dfsVis)){
                    return true;
                }
            }
        }
        return false;
    }
};
