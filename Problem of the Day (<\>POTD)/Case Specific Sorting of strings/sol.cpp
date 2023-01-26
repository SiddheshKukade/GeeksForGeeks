class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
    vector<char> small;
    vector<char> caps;
    for(int i=0; i<str.size();i++){
        if(int(str[i])>=97){
            small.push_back(str[i]);
        }else{
        caps.push_back(str[i]);
   
        }
    }
         sort(small.begin() , small.end());
        sort(caps.begin(), caps.end());
        int m =0; 
        int N=0;
    for(int i=0; i<str.size();i++){
      if(int(str[i])>=97){
            str[i] = small[m];
            m++;
        }else{
            str[i] = caps[N];
            N++;
        }
        
    }
    return str;
    }
};
