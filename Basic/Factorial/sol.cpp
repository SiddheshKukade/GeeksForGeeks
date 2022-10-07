class Solution{
public:
    long long int factorial(int N){
        long long int ans = 1 ;
      for(int i=N ; i>0 ; i--){
          ans *= i;
      }
      return ans;
    }
};
