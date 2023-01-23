class Solution {
  public:
    string removePair(string s) {
        // code here
        string ans;
        for(int i=0; i<s.size();i++){
            if(ans.empty()) ans.push_back(s[i]);
            else if(!ans.empty() && ans.back() == s[i]) // if ans is not empty and curr car is smar to previous ans char 
                ans.pop_back(); // the remove that char and move on
            else ans.push_back(s[i]);
        }
        if(ans.empty())
        return "-1";
        else return ans;
    }
};
