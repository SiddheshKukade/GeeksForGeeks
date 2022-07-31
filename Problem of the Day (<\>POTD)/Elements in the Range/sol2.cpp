//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
	//first check if it contains higher than the A and lower than B 
	bool pass1 = false , pass2= false;
	for(int i=0; i<n; i++){
	   if(arr[i] == A || arr[i] > A){
	       pass1=true;
	   }
	    if(arr[i] == B || arr[i] < B){
	       pass2=true;
	   }
	}
	return (bool)pass1 && pass2;
	}


		 

};
	

//{ Driver Code Starts.


int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,A,B;
		cin>>n>>A>>B;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];

        

        Solution ob;
        if (ob.check_elements(a, n, A, B))
			cout << "Yes";
		else
			cout << "No";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}







// } Driver Code Ends
