
class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        
        vector<long long> ans;
        if(n ==1){
            ans.push_back(1);
            return ans;
        }
        long long first =1 ;
        long long second =1;
        ans.push_back(first);
        ans.push_back(second);
        // cout<<first<<" "<<second<<" ";
        for(int i =0 ; i<n-2; i++){
            long long  temp = first;
            first  = second ;
            second = temp  +second;
            ans.push_back(second);
            // cout<<second<<" ";
        }
        // cout<<endl;
        return ans;
    }
};
