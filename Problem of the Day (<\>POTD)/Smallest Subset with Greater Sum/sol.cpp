class Solution{
        // we are creating second array to store the sum
       //then we'll check for the current element 
       //1. remove the element from the sum 
       //2. check if the sum is smaller than that number 
       // if true:
           // return ans;
       // else : 
           // iterate next number
    public:
    int minSubset(vector<int> &arr,int N){
        sort(arr.rbegin(),arr.rend());
     
       vector<long long> sum(N);
        sum[0] = arr[0];
        for(int i=1; i<N ; i++){
            sum[i] = sum[i-1] + arr[i];
        }
        long long total = sum[N-1];
        for(int i=0; i<N ;i++){
            if((total - sum[i]) < sum[i]){
                return i+1;
            }
        }
        return N;
       
    }
};
