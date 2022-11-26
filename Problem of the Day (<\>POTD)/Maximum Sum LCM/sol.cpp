class Solution {
  public:
    long long int maxSumLCM(int n) 
    {
        // code here
        long ans = 0 ;
        for(int i=1; i*i<=n ; i++){ // only going half of n to save time 
            if(n % i ==0){
                ans += i;
                long q = n/i;
                if(q != i)
                ans += q; // storing the second quotient
            }
        }
        return ans;
    }
};
