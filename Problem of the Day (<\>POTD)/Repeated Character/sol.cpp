//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        unordered_map<char,int> mp; 
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++; // will store the strings and frequency 1121111123422
            // cout<<mp[s[i]];
        }
        for(int i=0 ; i<s.size(); i++){
            if(mp[s[i]] >=2){
                return s[i];
            }
        }
        return '#'; // if no element occureed more than twice
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}



// } Driver Code Ends
