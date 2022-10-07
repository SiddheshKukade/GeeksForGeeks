
class Solution {
  public:
    long long sumOfSeries(long long n) {
        long long    sum =0;
        //using the for loop causes some errors of precision so we are using a already made
        // formula for calculatin the sumOfSeries by cube
    //   for(int i=1 ; i<=N ;i++){
    //   sum +=pow(i , 3);   
    //   }
      sum = (n*(n+1) /2 );
      sum *=sum;
      return sum;
    }
};
