class Solution {
  public:
    long long sumOfSeries(long long N) {
        long long sum =0;
      for(int i=1 ; i<=N ;i++){
       sum += i*i*i;   
      }
      return sum;
    }
};
