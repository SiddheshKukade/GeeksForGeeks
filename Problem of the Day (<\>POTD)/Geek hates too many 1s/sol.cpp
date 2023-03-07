class Solution {

  public:
  int noConseBits(int n) {
    int cnt=0;
    for(int i=31;i>=0;i--){//check untill max int combnation
        int mask= (1<<i);  // left shift
        if(n&mask){ //if 1 then 
        //there is 1 present at ith position
            cnt++;
            if(cnt == 3){
                n=n&(~mask);
                cnt =0;
            }
        }
        else{
            cnt =0;
        }
        }
        return n;
    }
};B
