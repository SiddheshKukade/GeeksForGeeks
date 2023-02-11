class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       vector<long long int> ans;
       long long int mul=1;
       for(int i =0; i<n;i++){
           mul =1;
               for(int j =0; j<n;j++){
            if(i==j ){
                continue;
            }else{
                mul *= nums[j];}
            }
            ans.push_back(mul);
            // c++;
       }
       
    //      for(int i =0; i<n;i++){
    //      if(nums[i] !=0){
    //       ans.push_back(mul/nums[i]);}
    //      else{
    //      }
    //   } 
       return ans;
    }
};
