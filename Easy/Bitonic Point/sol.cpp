class Solution{
public:
	
	int findMaximum(int a[], int n) {
	   // int min= arr[0];
	    int max = a[0];
    for(int i=0 ;i<n;i++){
       if(max < a[i]){ // max
           max=a[i];
       }
   }
   return max;
	}
};
