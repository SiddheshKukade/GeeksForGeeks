
class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *nums, int n, int k)
    {
        deque<int> dq; // stores the index of arrays
        vector<int> ans;
        
         for(int i=0 ; i<n ;i++){
              if(!dq.empty() && dq.front() == i-k) dq.pop_front();
              while(!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();
               dq.push_back(i); // pushing the indexs
                if(i>=k-1) ans.push_back(nums[dq.front()]);
        }
        return ans; 
    }
}; 
