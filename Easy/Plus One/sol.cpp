class Solution {
  public:
    vector<int> increment(vector<int> arr ,int n) {
        bool toggle = false;
        for(int  i=n-1 ; i>=0;i--){
            if(arr[i]!= 9){
                arr[i]++;
                break; // this only break from the iteration not from the loop so that 199 will be 200 instead of 190
                
            }else{
                arr[i] = 0;
            }
            if(arr[0] == 0){
                arr.push_back(1);
                reverse(arr.begin(), arr.end());
            }
        }
        return arr;
    }
};
