class Solution {
  public:
    int distributeTicket(int N, int k) {
       int i=1, j=N, ans;
       bool a= false;
       while(i<=j){
           if(!a){
               i+=k;
               ans = j;
           }else{
               j -=k;
               ans = i;
           }
           a = !a;
       }
        return ans;
    }
};
