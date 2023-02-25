class Solution {
  public:
    int checkCompressed(string S, string T) {
        // code here
        int i=0;
        int j=0;
        int n = S.size();
        int m = T.size();
        while(i<n && j<m){
            if(isdigit(T[j])){
                int count =0;
                while(j<m && isdigit(T[j])){
                    count  = count * 10 + (T[j] - '0'); // to keep checking the next numbers
                    // multiplying by 10 to get 2 and 3 digit numbers
                    j++;
                }
                i += count; // fast forward i to next index to check for chars.
            }
            else if(S[i] == T[j]){
                i++;
                j++;
            }
            else if(S[i] != T[j]) return 0; // if chars not same erro occured
        }
        return i == n && j ==m;
    }
};
