class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        // carry a subarry as long as it is giving a positive sum.
        //first start with discussing 3 loop soln
        // then elinate the third loop
        // at the end explain kandane algorithm
        int sum =0;
        int maxi = INT_MIN;
        for(int i=0; i<n;i++){
            sum += arr[i];
            maxi = max(sum,maxi);
            if(sum <0) sum =0;
        }
        return maxi;
    }
};
