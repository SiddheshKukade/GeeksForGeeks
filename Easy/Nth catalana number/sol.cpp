

class Solution
{
    public:
    //Function to find the nth catalan number.
    cpp_int findCatalan(int n) 
    {
         cpp_int  catalan[n+1];
    // memset(catalan, 0 ,sizeof(catalan));
    catalan[0] =1;
    catalan[1]= 1;
    for(int i=2;i<=n;i++){
        for(int j=0; j<i; j++){
            catalan[i] += (catalan[j]*catalan[i-j-1]);
        }
    }
    return catalan[n];
    //   //just like fibonacci but the formula is different 
       
    // //   int[] dp = 
    // if(n<=1) return 1;
    // unsigned long int res = 0;
    // for(int i=0; i<n; i++){
    //     res += findCatalan(i)*findCatalan(n-i-1);
    // }
    // return res;
    }
};
