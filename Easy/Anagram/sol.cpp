class Solution
{
    public:
    string str= "";
    //Function is to check whether two strings are anagram of each other or not.
    bool checkPresent(string s , char c){
        bool pre = false;
        for(int i=0 ; i<s.length() ;i++){
            if(s[i] == c){
                pre= true;
                s.erase(s.begin()+(i));
                str=s;
                // cout<<s<<endl;
                break;
            }
        }
        return pre;
    }
    bool isAnagram(string a, string b){
        str = b;
        bool pre = false;
        if(a.length() != b.length()){
            return false;
        }
      for(int i=0 ; i<a.length() ;i++){
         pre = checkPresent(str,a[i]);
         if(pre == false){
             return pre;
         }
        }
        return pre;
    }

};
