
class Solution {
  public:
    int minOperation(string s) {
        if(s.size() <=3)
            return s.size();
        int ans = INT_MAX;
        string str= "";
        for(int i=0;i<s.size();i++){
            str = str+s[i]; // adding one char in str
            string temp= s.substr(i+1, str.size()); // leftover string 
            if(temp == str){ // are they equal 
                        // curr string size +1  + (og str size - curr str size *2 )
                int ctr = str.size() + 1 + (s.size() - str.size()*2);
                ans = min(ans, ctr);
            }
        }
         return (ans==INT_MAX)? s.size(): ans;
    }
};
