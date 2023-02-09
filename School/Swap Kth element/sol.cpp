class Solution{
public:	
	// swap k'th element from beginning and end
	void swapKth(int *arr, int n, int k) {
	    swap(arr[k-1], arr[n-k]);
	    
	}
};
