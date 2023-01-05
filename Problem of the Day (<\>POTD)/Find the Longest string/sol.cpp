class Solution
{
public:
    string longestString(vector<string> &words)
    {
        unordered_map<string, int> m ;
        sort(words.begin() , words.end()); // sort the words lexographically
        
        for(auto i:words){
            m[i]++; // store all of them in a map 
        }
        
        string ans ;
        
        int size = INT_MIN;
        for(auto i:words){
            string temp;
            int c = 0 ;
            int n=i.size(); // n is size of current word
            for(int j=0; j<n;j++){
                temp +=i[j]; // store the word in temp
                if(m[temp]) c++ ; // if that stirng already exisits increase the counter
            }
            
            if(c==n && n>size){ // all prefix present and count is greater than 
            //the size so that largest string is found 
                size=n;
                ans=i;
            }
        }
        return ans;
    }
};
