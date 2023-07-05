class Solution
{
public:
    int mod = 1000000007;
    long long int func(int n ,long long dp[]){
        if(n<=2) return n;
        if(dp[n] != -1) return dp[n];
        long long int a = (((n-1)%mod) * func(n-2, dp)%mod)%mod;
        long long int b= func(n-1, dp) %mod;
        return dp[n] = a+b;
    }
    int countFriendsPairings(int n) 
    { 
        // code here
        long long int dp[n+1];
        memset(dp, -1, sizeof(dp));
        return func(n,dp)%mod;
    }
};    
