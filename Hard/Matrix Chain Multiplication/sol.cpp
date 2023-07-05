class Solution{
    static int matrixMultiplication(int n, int a[])
    {
        // code here
        int dp[][] = new int[n][n];
        for(int len = 2 ; len<n; len++ ){ //to traverse diagnoally
            for(int row =0, col= len; row<n-len; row++, col++){
                dp[row][col]= Integer.MAX_VALUE;
                for(int k = row+1; k<col; k++){
                dp[row][col] = Math.min(
                    dp[row][col], dp[row][k] + dp[k][col]
                    + a[row]*a[k]*a[col]
                    );
                }
            }
        }
        return dp[0][n-1];
    }
}
