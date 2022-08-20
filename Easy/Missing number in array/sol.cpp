
class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        //TLE
        // vector<int>::iterator it;
        // for(int i =1 ; i<=n;i++){
        //   it =  std::find(begin(array),end(array), i);
        // if (it == array.end()) return i;   
        // }
    
        int  sum =0; 
        int total_sum = n*(n+1 )/ 2 ; // formula to get the total sum 
        for(int i =0 ; i<n-1;i++){// doing it n-1 because n is 2 number  plus 
        sum += array[i];
        }
        return total_sum - sum ; }
};
