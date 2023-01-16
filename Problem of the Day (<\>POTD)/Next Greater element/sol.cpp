class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        // find the next greater
        vector<long long> ans(n,-1);
        stack<long long>st;
        st.push(arr[n-1]);
        
        for(int i=n-2; i>=0; i--){
            while(!st.empty() && arr[i] >= st.top()){ //if n-2 is greater than n-1 
                st.pop(); // remove it 
            }
            if(st.empty()){ // no more ele present SPECIALLY FOR LAST ELEMENT
                ans[i]=-1; // give -1 
            }else{ // else store the answer
                ans[i]=st.top();
            }
             st.push(arr[i]);//push the current element 
        }
        return ans;
    }
};
