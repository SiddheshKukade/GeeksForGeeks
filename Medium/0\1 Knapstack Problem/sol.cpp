class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int helper(int w,int ind,int *wt,int *val,vector<vector<int>>& dp){
        if(ind==0){
            if(wt[0]<=w) return val[0];
            else return 0;
        }
        if(dp[ind][w]!=-1) return dp[ind][w];
        int notTake = helper(w,ind-1,wt,val,dp);
        int take = INT_MIN;
        if(wt[ind]<=w) take = helper(w-wt[ind],ind-1,wt,val,dp) + val[ind];
        return dp[ind][w] = max(take,notTake);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> dp(n,vector<int>(W+1,-1));
       return helper(W,n-1,wt,val,dp);
    }
};
