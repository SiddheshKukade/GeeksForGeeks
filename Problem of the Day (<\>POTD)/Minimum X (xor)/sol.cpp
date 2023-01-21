class Solution {
  public:
    int minVal(int a, int b) {
        ///count the no of 1s in a and b
       int tempb=b;
       int bsetbits=0;
       while(tempb>0){
           if(tempb&1) bsetbits++;
           tempb>>=1;
       }
       int tempa=a;
       int asetbits=0;
       while(tempa>0){
           if(tempa&1) asetbits++;
           tempa>>=1;
       }
       
       if(asetbits == bsetbits){ // if both set bits are same
           return a;
       }else if(asetbits>bsetbits){ //a has more 1s so remove the.
           int ans=0;
           int  rem=bsetbits; // remainning bits from b
           
           for(int i=31;i>=0;i--){
               
               if(a&(1<<i)){
                   ans|= (1<<i) ; //performing OR operation
                   rem--;
               }
                if(rem==0)
                  return ans;
            }
       }
       else{ // b has more 1s than a so add more ones to a
           int rem= bsetbits-asetbits;
           int ans=a;
           for(int i=0; i<=31; i++)
           {
               if((a&(1<<i) )== 0){
                   ans |=(1<<i);
                   rem--;
               }
               if (rem==0) return ans;
           }
       }
       return 0;
    }
};
