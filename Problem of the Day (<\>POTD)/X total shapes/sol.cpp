
class Solution
{
    public:
    //Function to find the number of 'X' total shapes.
    vector<int> xi={-1, 0, 1,0};
    vector<int> yi={0, 1 ,0, -1};
    void dfs(int u , int v, int n , int m , vector<vector<char>> &grid){
        if(u<0 or v<0 or u>=n or v>=m or grid[u][v] =='O' ){return ;}
        grid[u][v]='O';
        for(int i=0; i<4 ;i++){
            int x = xi[i]+u;
            int y= yi[i]+v;
            dfs(x,y,n,m,grid);
        }
    }
    int xShape(vector<vector<char>>& grid) 
    {
        // Code here
        int i , j, k ;
        int count =0;
        int n= grid.size(), m=grid[0].size();
        
        for(i =0 ; i<grid.size(); i++){
            for(j=0; j<m; j++){
                if(grid[i][j] =='X'){
                    count++;
                    dfs(i,j,n,m,grid);
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	}
	return 0;
}
