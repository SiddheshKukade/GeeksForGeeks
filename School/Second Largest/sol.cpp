//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
    int getLargest(int arr[], int n ){
        int largest =0 ; 
        for(int i =0 ; i<n ; i++){
            if(arr[i] > arr[largest])
                largest = i ;
        }
        return largest;
    } 
	int print2largest(int arr[], int n) {
    // int i, j,temp, count=0; 
    // for (i = 0; i < n - 1; i++){
    //     for (j = 0; j < n - i - 1; j++){
    //         if (arr[j] > arr[j + 1]) {
    //             temp= arr[j] ;
    //              arr[j] =  arr[j+1];
    //              arr[j+1]= temp;
    //         }
    //     }
    // }
    //  return arr[n-2];
    
    // int largest = getLargest(arr , n );
    // cout<<"largest"<<largest;
    // int res=  -1 ;
    // for(int i =0 ; i<n ; i++){
    //     if(arr[i]!= arr[largest])
    //         res=i;
    //     else if(arr[i]>arr[res]){
    //         res=i;
    //     }
    // }
    // return res;
    int first=-1 , second=-1 ;
      for (int j = 0; j < n ; j++){
           if(arr[j] > first  ){
              second = first;
              first = arr[j];
          }else if (arr[j] > second && arr[j] < first ){
              second=arr[j];
          }
         
      }
      return second;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
