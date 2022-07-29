//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
vector<bool> isPrime; // calculating prime numbers for 100010 numbers and store them in isPrime array
    void prime_no(){
        isPrime.resize(100010, true);
        isPrime[0]=false;
        isPrime[1]=false;
        for(int i =2; i<100010; i++){
            for(int j = i+i; j<100010; j=j+i){
                isPrime[j] = false;
            }
        }
    }
    
    int no_of_seniors(int i, vector<int> &arr, vector<int> &dp){
        if(arr[i] ==0 )return 0;
        if(dp[i] != -1) return dp[i];
        return dp[i]=  1+ no_of_seniors(arr[i]-1, arr, dp);
    }
    
    int firingEmployees(vector<int> &arr, int n){
        prime_no();
        vector<int> dp(n, -1); // store the ranks in dp
          for(int i =0 ; i<n; i++){
              if(arr[i] ==0 ) dp[i] =0;
          }
        for(int i =0 ; i<n; i++){
            if(dp[i] != -1 ) continue;
            dp[i] =no_of_seniors(i,arr, dp); // return no of senior as int 
        }
        int countBlackList = 0 ; 
           for(int i =0 ; i<n; i++){
                if(dp[i]==0) continue ; // for geek (founder)
                if(isPrime[dp[i] + i + 1 ]) {countBlackList++ ;}// used the given formula 
                
           }
           return countBlackList;
    }
};

// parts cal primeno , cal no of seniors , cal total perf and check if it's prime or not    

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n,0);
        
        for(int i=0; i<n; i++)
            cin >> arr[i];

        Solution obj;
        cout << obj.firingEmployees(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
