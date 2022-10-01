
class Solution{
    public:
    string longest(string names[], int n)
    {
        //   int maxi = INT_MIN ;
        //   for(int i=0 ; i<n ;i++){
        //       maxi = std::max(arr[i].length(), maxi.length());
        //   }
        //   return maxi;
         int pre = 0;
        string ans;
        for(int i = 0 ; i < n ; i++){
            if(names[i].length() > pre){
                ans = names[i];
                // cout<<ans;
                pre = names[i].length();
            }
        }
        return ans;
    }
};
