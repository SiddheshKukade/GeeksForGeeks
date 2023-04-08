
class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack <int> st;
        for(auto x:arr){
            if(st.size()){
                if((st.top()>=0 and x<0) or (st.top()<0 and x>=0)){
                    st.pop();
                }else{
                    st.push(x);
                }
            }else{
                st.push(x);
            }
        }
        vector<int> ans;
        while(st.size()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
