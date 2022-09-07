class Solution{
public:
	// function to return sum of  1, 2, ... n
	long long seriesSum(int n) {
	   long a= n;
// 	  long long ans =0;
// 	  while(n>0){
// 	      ans+=n;
// 	      n--;
// 	  }
//using a formula 
	  return (a *( a+1)/2);
	}
};
