class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    vector<string> ans;
		    int n = s.size();
		    string sub;
		    // Code here    
		    for(int i=0; i<(1<<n); i++){
		        sub = "";
		        for(int j =0 ; j <n ; j++){
		            if(i & (1<<j)){//checking if msb is set or not using right shift operatior
		                sub +=s[j];
		            }
		        }
		          if(sub.length() >0)
    		            ans.push_back(sub);
		    }
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};
