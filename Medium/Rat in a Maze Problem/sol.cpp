
class Solution{
    public:
    void solve (int i, int j , vector<vector<int>> &a , int n , vector<string> &ans, string move , vector<vector<int>> &vis){
        if(i == n -1 && j == n-1){ // if we've reached to the destination 
            ans.push_back(move); // add the current move to the answer
            return;
        }
        //down check if ok then move on that and call the recursion again 
        if((i+1<n) && (!vis[i+1][j]) && (a[i+1][j] ==1) ){
            // first checked the boundary  check if not visited already  should have 1 value so that we can move 
            vis[i][j] =1 ; // make the move
            solve(i+1 , j ,a ,n, ans ,(move+'D'), vis);
            vis[i][j] = 0 ; //unmake the move // unvisit it a the fucntion came back
        }
        //left check if ok then move on that and call the recursion again 
        if((j-1>=0) && (!vis[i][j-1]) && (a[i][j-1] ==1) ){
            vis[i][j] =1 ;
            solve(i , j-1 ,a ,n ,ans ,move+'L', vis);
            vis[i][j] = 0 ; // unvisit it after the fucntion came back
        }
        //right check if ok then move on that and call the recursion again 
        if((j+1<n) && (!vis[i][j+1]) && (a[i][j+1] ==1) ){
            vis[i][j] =1 ;
            solve(i , j+1 ,a ,n, ans ,move+'R', vis);
            vis[i][j] = 0 ; // unvisit it after the fucntion came back
        }
        //up check if ok then move on that and call the recursion again 
        if((i-1>=0) && (!vis[i-1][j]) && (a[i-1][j] ==1 )){
            vis[i][j] =1 ;
            solve(i-1 , j ,a ,n ,ans ,move+'U', vis);
            vis[i][j] = 0 ; // unvisit it after the fucntion came back
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        //travel in lexical oerder means that we have to travel in DLRU (down left right up) fashion
        //after execution of the calll mark the current node as not visited again. so it can be checked by another call 
        //time complexit 4^(n*m)
        //sppace complexity
        vector<string> ans ; 
        vector<vector<int>> vis(n , vector<int> (n, 0 ));
        if(m[0][0] == 1 ) solve(0,0,m,n, ans, "" , vis); 
        // found the avaialbe spot to move and calculate the next step for that 
        return ans;
    }
};

    
