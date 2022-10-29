class Solution
{
public:
    void func(int ind , int sum , vector<int> &arr, int N , vector<int> &ans){
        if(ind == N ){
            ans.push_back(sum);
            return;
        }
        //pick the element
        func(ind +1 , sum + arr[ind] , arr , N , ans);
        //not pick the element
        func(ind +1 , sum  , arr , N , ans);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // solving using recursion
        // no of subsets that we can generate is 2 ^n 
        //first bruteforce approcahc 
        // subsets can be from 1size to the n size (subset can also be an empty set)
        //called as power set - geneate all subsets and then give the answers 
        // OPTIMIZED  RECURSIVE SOLUTION 
        // perform pick and non pick method on a particular index 
        //TC => 2 ^ N + 2^n log(2^n)
        //SC => 2 ^ n
        vector<int> ans;
        func(0,0, arr, N , ans);
        sort(ans.begin() ,ans.end());
        return ans;
    }
};
