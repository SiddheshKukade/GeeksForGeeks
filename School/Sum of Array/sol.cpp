class Solution{
public:
	// function to return sum of elements
	// in an array of size n
	int sum(int a[], int n) {
	   int sum=0 ;   
       for(int i=0 ;i<n;i++){
          sum += a[i];
       }
       return sum;
	}
};
