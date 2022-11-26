
class Solution {
	public:
		int NthTerm(int n){
		    //formaula: (prev*i)+1
		    int mod = 1e9+7;
		    long long ans =2;
		    for(int i =2 ; i<=n ;i++){
                ans = ((((ans *i)%mod)+1)%mod);		        
		    }
		    return ans;
		}
