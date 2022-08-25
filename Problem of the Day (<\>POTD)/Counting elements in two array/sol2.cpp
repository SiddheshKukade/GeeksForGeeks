#failing test cases
class Solution{
  public:
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
    //2 arrays are givn 
    // calculate greter or equal element for each element
    vector<int>ans ; 
    int count =0;
    for(int i=0; i<n ;i++){
        count=0;
        for(int j=0 ; j<n ;j++){
            if(arr1[i] >=arr2[j]){
                count++;
            }
        }
        if(count!=0) ans.push_back(count);
    }
    return ans;
    }
};
