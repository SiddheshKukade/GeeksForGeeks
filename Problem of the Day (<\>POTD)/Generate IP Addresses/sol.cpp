
class Solution{
  public:
  bool isValid(string s ){
      int n = s.length();
      if(n==0 || n>3 || (s[0] == '0' && n>1) ||stoi(s) > 255)return false;
      return true;
  }
    vector<string> genIp(string &s) {
        vector <string> ans;
        int n =s.length();
        if(n>12) { // if length is more 
            return ans;
        }
        for(int i =1; i<n-2 ; i++){ // to make sure that we have at least 4 digits to work upon
            for(int j =i+1 ; j<n-1 ; j++){
                for(int k =j+1 ; k<n ; k++){
                    string first = s.substr(0,i); // from 0 to i index
                    string sec = s.substr(i,j-i); // from i to j -i index doing j-i gives how many positions to go forward
                    string third = s.substr(j,k-j); //from j to k index
                    string fourth = s.substr(k,n-k); // from k till last of the string
                    if(isValid(first ) && isValid(sec) && isValid(third) && isValid(fourth)){
                        ans.push_back(first+"."+sec+"."+third+"."+fourth);
                    }
                }
            }
        }
        return ans;
    }

};
