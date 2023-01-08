
class Solution
{   
public:
    long long smallestpositive(vector<long long> array, int n)
    { 
        // given array of n size 
        // find minimum pos int which cannot be created by any combo of given nos
        long long target =1 , res=0;
        sort(array.begin(), array.end());
        for(int i=0;i<n;i++){
            if(array[i] <=target){
                res+=array[i];
                target=res+1;
            }else{
                return target;
            }
        }
        return target;
    } 
};
