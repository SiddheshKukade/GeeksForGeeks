class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // // code here
        // int bal=0;
        // bool ok = false;
        int five =0;
        int tens =0;
        
        for(int i=0; i<N;i++){
            if(bills[i] == 5 ){
                five++;
            }else if(bills[i] == 10){
                tens++;
                five--;
            }else{
                if(tens > 0){
                    tens--;
                    five--;
                }else{
                    five -=3; // for 20 rs
            }
            }
              if(five <0) return false;
        }
        return true;
      
    }
};
