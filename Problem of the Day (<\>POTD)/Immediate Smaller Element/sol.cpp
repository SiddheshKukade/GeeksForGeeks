class Solution{
public:	
	void immediateSmaller(int *arr, int n) {
	    //  THis doesn't works but the below uncommented works just by changing the sequqnce of if else condition not sure why this is happening ?
	    
// 	    for(int i  =0 ; i<n-1 ; i++){
// 	        if(arr[i]<arr[i+1]) {
// 	            arr[i] = -1;
// 	        }
// 	        else {
// 	            arr[i] = arr[i+1];
// 	            }
// 	    }
// 	    arr[n-1] = -1;
// 	}
         for(int i=0;i<n-1;i++){
	        if(arr[i]>arr[i+1]){
	            arr[i] = arr[i+1];
	        }
	        else{
	            arr[i] = -1;
	        }
	    }
	   arr[n-1]=-1;
	}
};
