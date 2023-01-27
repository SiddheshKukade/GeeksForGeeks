class Solution {
	public:
		int mod = 1e9+7;
		int CountWays(string str){
		   if(str[0]=='0') return 0; // if start  zero then return 0 as answer
		   int n = str.size();
		   vector<int> v(n+1,0); // all have zero values
		   v[0]=1;
		   v[1]=1;
		   for(int i=2;i<=n;i++){ // start from 2 to the end
		       if(str[i-1]>'0') v[i]=v[i-1]; // if greater than zero then first add our prev counts to the current ans then then continue for checking furthur conditions 
		       // if prev no was 1  // OR if prev no was 2 and last no was less than 7 makes eligible for 25 characters
		       if(str[i-2] == '1' || (str[i-2]=='2' && str[i-1] <'7'))
		       v[i]=(v[i]+v[i-2]) %mod; // update the answer by adding the combo counts for i-2 as well aand then mod it which will convert it back to the integer
		   }
		   return v[n];
		}

};
