
class Solution{
	public:
    	long long findNth(long long N)
    {
        // code here.
        long long ans=0, temp= 1;
        while(N){
            ans = ans + temp  *( N % 9 );
            temp *= 10;
            N/=9;
        }
        return ans;
    }
};
