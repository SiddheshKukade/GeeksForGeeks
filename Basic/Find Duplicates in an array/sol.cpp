class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
    unordered_map<int,int>m ;
    vector<int> ans(1,-1);
    bool toggle= false;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
        }
    for(auto x: m){
         if(x.second> 1){
             toggle = true;
            ans.push_back(x.first);
    }
    }
    if(toggle){
        ans.erase(ans.begin());
    }
   
    return ans;
    }
};
