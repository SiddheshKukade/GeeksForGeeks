
class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        long long ans=0;
        sort(arr.begin(), arr.end()); // ascending 1 2 3 4 5 
        for(int i=1; i<N; i++){
            if(arr[i]<=arr[i-1]){ //if  same or bigger found
            int diff = arr[i-1] - arr[i]; // get diff
            ans += diff +1; // adding +1 to the diff for the case of same where  diff will be zero
            arr[i] += diff+1; //update curr element to check for furthur operations
        }
      }
      return ans;
    }
};
