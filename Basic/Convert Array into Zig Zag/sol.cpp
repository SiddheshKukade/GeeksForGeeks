class Solution{
public:	
	// Program for zig-zag conversion of array
	void zigZag(int arr[], int n) {
	    int temp = 0;
	  // keep the odd position largest amaong others on Left and right
	  for(int i = 1; i < n; i+=2){
	      //check if it is already greatest
	   //   if (arr[i]> arr[i+1] && arr[i] > arr[i-1]) continue;// if is is already greatest
	         if (arr[i-1] > arr[i]) { // if previous is bigger
	        swap(arr[i-1] , arr[i]);
	      } 
	      if(i+1 !=n){ // prevent overflow 
    	      if (arr[i+1] > arr[i]) { // if next is bigger
    	       swap(arr[i+1] , arr[i]);
    	       
    	      }
	      }
	  }
// 	  return arr;
	}
};
