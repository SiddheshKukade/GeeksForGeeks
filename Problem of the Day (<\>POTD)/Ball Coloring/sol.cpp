class Solution {
  public:
    unsigned long long int noOfWays(unsigned long long int n){
    //a ball can have 2 colors
    // 1 - 2 
    // 2 - 4 
    // 3 - 8 
    // we create follwing formula
    return n*(n-1)+2;
    }
};
