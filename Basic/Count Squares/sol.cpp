class Solution {
  public:
    int countSquares(int N) {
        // code here
        int ans=0;
        for(int i=1; i<N; i++){
            if(i*i < N) ans++;
            else return ans;
        }
        return 0;
    }
};
