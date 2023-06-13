class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    sort(arr, arr+n, greater<int>());
	        vector<int> result;
	        for(int i=0; i<k; i++){
	            result.push_back(arr[i]);
	        }
	    return result;
	}

};
