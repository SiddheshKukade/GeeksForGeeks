//User function Template for C++
// Input:
// N = 3, X = 0
// S = "010"
// Output:
// 0
// Explanation: 
// Since the range(X)=0, So Wifi is only 
// accessible in second room & 1st & 2nd
// room have no wifi.
class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        int zero=0, one=0;
        for(int i=0;i<N;i++){
            if(S[i]=='1'){
                if(zero>0){ // we have some zeros in between.
                // if no ones on left and zero's length is more that capacity(X) then we can't provide wifi
                    if(one==0 and zero>X) return false;
                    //if we were having ones previously and 
                    //but still if current zero count is larger 
                    //than the zero capacity*2 then we can't provide wifi 
                    else if(zero>X*2)return false;
                }
                // anyway make if there was a 1
                zero=0;
                one=1;
            } 
            else zero++;
        }
        if(zero>0){ // even after looping if some zeros are left.
            if(one==0 or zero>X) return false; //ex.00000 with X=2 returns false but with X=-1 will return true
        }
        return true; // survived everything thing so provide wifi
    }
};
