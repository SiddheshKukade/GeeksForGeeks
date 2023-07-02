class Solution {
  public:
    long long int dp[1000][1000];
    long long int solve(int coins[], int m , int n){
        if(m==-1 and n>0) return 0;
        if(n ==0) return 1;
        if(n <0)  return 0;
        if(dp[m][n] != -1) return dp[m][n];
        return dp[m][n] = solve(coins , m-1, n) + solve(coins , m , n-coins[m]);
    }
    long long int count(int coins[], int M, int N) {
        dp[M][N+1];
        for(int i=0; i<M; i++){
            for(int j=0; j<=N; j++){
                dp[i][j] = -1;
            }
        }
        return solve(coins, M-1, N );
        // code here.
    }
};
