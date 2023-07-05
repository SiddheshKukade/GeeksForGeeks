class Solution{
public:
//  bool solve(int index,  int arr[], int N, int target){
//         //base case
//         if(index>= N) return 0;
//         if(target <0) return 0;
//         if(target ==0 ) return 1;
//         bool  incl = solve(index+1, arr, N , target-arr[index]);
//         bool excl = solve(index+1, arr, N ,target-0);
        
//         return incl || excl ;
//     }
     bool solve(int index,  int arr[], int N, int target, vector<vector<int>> &dp){
        //base case
        if(index>= N) return 0;
        if(target <0) return 0;
        if(target ==0 ) return 1;
        if(dp[index][target] != -1)
            return dp[index][target];
        bool  incl = solve(index+1, arr, N , target-arr[index], dp);
        bool excl = solve(index+1, arr, N ,target-0, dp);
        
        return dp[index][target] = incl || excl ;
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        
        // code here
        int total=0; 
        for(int i=0; i<N; i++){
            total += arr[i];
        }
        if(total &1)
            return 0;
       int target = total/2;
    //   return solve(0, arr, N , target); 
    vector<vector<int>> dp(N, vector<int>(target+1, -1));
    return solve(0 , arr,  N, target, dp);
    }
};
