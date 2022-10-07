class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int largest = INT_MIN;
        for(int i=0 ;i<n  ;i++){
            if(largest < arr[i]){
                largest = arr[i];
            }
        } return largest ;
    }
};
