class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int maxi = INT_MIN;
	    int ans=0;
	    bool f = false;
	    for(int i=0; i<n ; i++){
	        int count =0;
	        for(int j=0; j<m; j++){
	            if(arr[i][j] == 1) f = true; 
	            count += arr[i][j];
	        }
	        if(maxi < count){
	            ans = i;
	            maxi = count;
	        }
	       // maxi = max(maxi, count);
	    }
	    if(!f) return -1;
	    return ans;
	}

};
