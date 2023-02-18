
class Solution{   
public:
    int appleSequences(int n, int m, string arr){
        // code here
        int st=0;
        int end=0;
        int ans=0;
        while(end !=n){
            if(m>0){
                if(arr[end]=='O'){
                    m--;
                }
            }else{ //  m becomes zero
                 if(arr[end]=='O'){
                     while(arr[st] != 'O'){
                            st++; // untill start reaches to the A
                    }
                    st++;
                    
                }
            }
            ans= max(ans ,(end-st)+1);
            end++;
        }
        return ans;
    }
};
