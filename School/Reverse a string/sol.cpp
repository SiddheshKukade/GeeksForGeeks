class Solution {
  public:
    string revStr(string S) {
        string ans;
        for(int i=S.length()-1 ; i>=0; i--){
            ans+=S[i];
        }
        return ans;
    }
};
