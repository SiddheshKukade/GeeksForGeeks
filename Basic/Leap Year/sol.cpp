class Solution{
public:
    int isLeap(int N){
       return (((N %4) ==0) && ((N %100)!=0)) || (N%400 ==0) ;
    }
};
