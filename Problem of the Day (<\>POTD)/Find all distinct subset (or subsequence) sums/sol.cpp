class Solution {
     set<int> s;
    int dp[101][10001];
    int n;
public:
    int rec(int ind , int sum , vector<int>&nums){
        if(ind==n){ // if idx reached to end
            s.insert(sum);
            return 0;
        }
        if(dp[ind][sum] != -1){ // if ans is already calculated
            return dp[ind][sum]; // return the ans
        }
        
        int take = rec(ind +1 , sum +nums[ind], nums); // consider the number for addition
        int nontake = rec(ind+1 , sum , nums);// don't consider for addition
        
        return dp[ind][sum] = take + nontake;  // 
    }
	vector<int> DistinctSum(vector<int>nums){
	    //calculate possible sums from the given array
	    // the approaches can be 
	        // 1. not choosing any number
	        // 2. choosing numbers one by one
	        // 3. choosing the combinations of pairs among the array
	        // Duplicates are not allowed
	        // ans list should be in distincing order
	   // we will be using recursion
	   //we will also be using memoization to eliminate repeatition and optimize the solution.
	   n= nums.size();
	   memset(dp , -1 , sizeof(dp)); // setting the dp array with all values as -1
	   //passing current idx , currentSum and numbers
	   rec(0,0,nums); // the answer of the function will be stored in dp array 
	   vector<int> res ; // for storing unique values only
	   for(auto val:s){
	       res.push_back(val);
	   }
	   return res;
	}
};
