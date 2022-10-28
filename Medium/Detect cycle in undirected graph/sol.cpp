// Detect cycle in undirected graph
class Solution {
  public:
  //time AND SPACE COMPLEXITY OF BFS AND DFS IS THE SAME
    // Function to detect cycle in an undirected graph.
    bool checkForCycleBFS(int s , int V ,  vector<int> adj[] , vector<int>& visited){
        //created a pair 
        queue<pair<int,int>> q;
        //make the current node visited
        visited[s] = true;
        // insert that element in our pair and set value as -1
        q.push({s, -1});
        
        while(!q.empty()){
            //take node and parent of element one by one and remove that element from the queue
            int node= q.front().first;
            int parent =  q.front().second;
            q.pop();
            for(auto it : adj[node]){ // loop over the current node's adjacent nodes
                if(!visited[it]){ // if that is not visited 
                    visited[it] = true; // make it visited
                    q.push({it,node}); // push it to our pair list to check it's adjacents later.
                }
                else if (parent != it) return true; // if it's visited ant the parent is not matching with it's adjacecnts then it is a cycle so return true for that
            }
        }
        return false; // if no true is returned it means no cycle 
    }
    bool checkForCycleDFS(int node , int parent , vector<int> adj[] , vector<int> &visited){
        visited[node] = 1;
        for(auto it: adj[node]){
            if(visited[it] ==0 ){
                if(checkForCycleDFS(it ,node,adj,visited)) return true;
            }
            else if(it!= parent) return true;
        }
        return false;
    }
    // using dfs
    bool bfs(int value , vector<int> adj[] , vector<int> &visited)

   {
       queue<pair<int,int>> q;
       q.push(make_pair(-1,value));
        while(!q.empty())
        {
            pair<int,int> temp = q.front();
            q.pop();
            int node = temp.second;
            int parent = temp.first;
            vector<int> v = adj[node];
            for(int i=0 ;i<v.size() ;i++)
            {
                if(visited[v[i]]!=1)
                {
                    visited[v[i]] = 1;
                    q.push(make_pair(node , v[i]));
                }
                else if(visited[v[i]] == 1 && v[i]!=parent)
                    return true;
                else
                    continue;
            }
        }
        return false;
   }
    bool isCycle(int v, vector<int> adj[]) {
        // vector <int> vis(V+1, 0);
        // for(int i=1  ; i<=V ; i++){
        //     if(!vis[i]){
        //         // if(checkForCycleBFS(i, V, adj, vis)) return true;
        //         if(checkForCycleDFS(i ,V, adj, vis)) return true;    
        //     }
        // }
        // return false;
               vector<int> visited(v,0);

       for(int i=0 ;i<v ; i++)

       {

           if(visited[i]!=1)

           {

               visited[i] = 1;

               if(bfs(i,adj,visited))

                return true;

           }

       }

       return false;
    }
};
