//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	    bool isPrime(int n){
	        if(n<=1){
	            return false;
	        }
	        for(int i=2 ;i*i <=n; i++){
	            if(n % i ==0){
	                return false;
	            }
	        }
	        return true;
	    }
	public:
		int NthTerm(int N){
        //print the subtraction of N and the closes prime number
        //the difference should be minimum
        //approach 
        // go back one by one and check if the no is prime
        // if prime then give the count
        if(N==1){
            return 1;
        }
        int ans = INT_MAX;
        
        for(int i=N; i>0;i--){
            if(isPrime(i)){
                ans = min(ans ,N-i);
                break;
            }
        }
          
		for(int i=N;i<=100000;i++){
		       if(isPrime(i)){
		           ans=min(ans,i-N);
		           break;
		       }
		   }
		   return ans;
    // return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		int ans = obj.NthTerm(N);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
