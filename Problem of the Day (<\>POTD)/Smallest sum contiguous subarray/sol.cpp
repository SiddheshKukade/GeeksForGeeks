class Solution{
    //find subarray containing the least sum among all elements 
  public:
  int smallestSumSubarray(vector<int>& a){
    //   //Code here
    //   int min=0;
    //   for(int i=0; i<a.size(); i++){
    //     if(min>0){
    //         min=a[i];
    //     }else{
    //         min+=a[i];
    //     }
      
    //   }
    //   return min;
    int sum = INT_MAX;
    int curSum = 0;
    for(int i=0; i<a.size(); i++){
        curSum += a[i];
        curSum = min(curSum , a[i]); // checking whether our addition is minimum or the current element is minimum !
        sum = min(curSum ,sum); // updating the curSum to get the latest minimum value
    }
    return sum;
  }
};
