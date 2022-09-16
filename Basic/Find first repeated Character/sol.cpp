
string firstRepChar(string str)
{
    //NORMAL APPROACH
    // sort(str.begin() , str.end());
    // string ans ="-1";
    // for(int i=0;i<str.length();i++){
    //     if(str[i] == str[i+1]){
    //         ans = str[i];
    //         return ans;
    //     }
    // }
    // return ans;
    
    int n = str.size();
    unordered_map<char, int> mp;
    string ans= "-1";
    for(int i=0; i<n;i++){
        if(mp[str[i]]){
            ans = str[i];
            return ans;
        }
        mp[str[i]]++;
    }
    return ans;
}
