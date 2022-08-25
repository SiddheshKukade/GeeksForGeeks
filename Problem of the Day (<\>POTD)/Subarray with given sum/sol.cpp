class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int flag=0 , start=0 , sum=0 ,end=0;
        vector<int> ans;
        
        for(int i=0 ; i<n ; i++){
            if(sum ==s) break;
            sum = sum + arr[i];
            while(sum > s){
                sum = sum - arr[start]; // if more no the remove the first
                start++; // increment the start pointer
            }
            if(sum == s){
                flag = 1;
                end= i+1;
                break;
            }
        }
        if(flag ==0 ) {
            ans.push_back(-1);
            return ans;
        }
        ans.push_back(start+1);
        ans.push_back(end);
        return ans;
    }
};
