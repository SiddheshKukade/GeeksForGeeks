class Solution
{
    public:
    int solve(int n, int x, int y, int z, vector<int> &dp){
        if(n==0) return 0;
        if(n<0) return INT_MIN;
        if(dp[n] != -1) return dp[n];
        dp[n] = max(
            (1+solve(n-x,x,y,z,dp)) 
            , max((1+solve(n-y,x,y,z,dp)),( 1+solve(n-z,x,y,z,dp)))
            );
        return dp[n] ;
    }
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        vector<int> dp(n+1, -1);   
        int ans= solve(n ,x,y,z,dp);
        if(ans <0) return 0;
        return ans;
        //Your code here
    }
};
