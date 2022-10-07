
class Solution {
  public:
       int RedOrGreen(int N,string S) {
           unordered_map <char , int> mp  ;
           for(int i=0;i<N ; i++){
              mp[S[i]]++;
           }
           return (mp['G'] > mp['R'] ? mp['R'] : mp['G']);
    }
};
