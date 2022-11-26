class Solution {
public:
// Time Complexity o(N)
// Space Complexity O (N)
	long long int NoOfChicks(int n){
	    vector<long long int> expires(50,0); // according to the limit constraints and all as 0
	    expires[6] = 1; // expired chick on 1st day
	    long long int cnt=1;
	    
	    for(int i=1; i<n; i++){// index starting from zero
	        cnt -= expires[i]; // remove the expired chick on that day;
	        expires[i+6] =2*cnt; // register it's expiry day.
	        cnt += (2*cnt); // 2 chick by the chick that day;
	    }
	    return cnt;
	}
};
