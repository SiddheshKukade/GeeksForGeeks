class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    sort(arr,arr+n);
	    if(arr[0] ==arr[n-1]) return -1;
	    int j=n-2;
	    while(arr[n-1]==arr[j])
	    { j--;
	    
	    }	    
	    return   arr[j] ;
	}
	
};
