//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        vector<vector <int>>dp; 
    int check(int e , int f){
        if(f==0 || f==1) return f;
        if(e==1) return f;
    if(dp[e][f] !=-1 ) return dp[e][f];
    int ans= INT_MAX;
        for(int k =1 ; k<=f;k++){
            int move = 1 + max(check(e-1 , k-1), check(e,f-k));
            ans= min(move,ans);
        }
        return dp[e][f]=ans;
    }
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int eggDrop(int n, int k) 
    {
        dp.resize(n+1 , vector<int>(k+1 , -1));
        return check(n,k);
        
    //     // your code here
    //     if(k==1 || k==0){
    //         //if no floor then no trial or 1 floor then 1 trial is needed;
    //     return k;
    //     }
    //     if(n==1) return k ; // if only 1 floor
    //     int min = INT_MAX , x, res ;
        
    //     for(x =1 ;x<=k ; x++){
    //         res = max(eggDrop(n-1, x-1), eggDrop(n, k-x));
    //         if(res<min) {
    //             min = res;
    //         }
    //     }
    //     return min +1;
    }
    
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}

// } Driver Code Ends
