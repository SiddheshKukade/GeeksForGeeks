class Solution
{
  public:
    vector<vector<int>> v;
    vector<int> vis,par,tmp;
    long long dfs(int node, int p=-1){
        vis[node]=1;
        par[node]=p; // starting with -1
        tmp.push_back(node); // tacking on temp;
        
        for(auto i:v[node]){
            if(vis[i]==0){
                long long res= dfs(i,node); // if not visited then visit it.
                if(res!=-1){ 
                    return res; // if not valid response the return it.
                }
            }
            else if (vis[i] ==1){
                long long sum =i;
                while(node !=i){
                    sum+=node;
                    node=par[node];  // updating node with it's parent
                }
                if(node ==i){ // there is a loop
                    return sum; // if sum is found 
                }
             return -1;   
            }
        }
        return -1;
    }
  long long largestSumCycle(int N, vector<int> Edge)
  {
    // code here
      long long ans= -1;
       vis = vector<int>(N); 
       v=vector<vector<int>>(N);
       par = vector<int>(N);
    
    for(int i=0; i<N;i++){
        if(Edge[i]!= -1){
            v[i].push_back(Edge[i]);
        }
    }
    
    for(int i=0; i<N;i++){
        if(!vis[i]){
           ans= max(ans,dfs(i));
           for(auto j:tmp){
               vis[j]=2; // removing the visited nodes
           }
           tmp.clear(); // clearing the temp array.
        }
    }
    return ans;
  }
};
