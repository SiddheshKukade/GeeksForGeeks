class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        // STACK SOLUTION
        int n = arr.size();
        stack<int> st;
        int left[n], right[n];
        vector<int> ans(n);
        
        // Left smaller
        for(int i=0; i<n;i++){
            while(st.size() && arr[st.top()] >= arr[i]) st.pop(); //poppinng the greater ele
            if(st.size()) left[i]= st.top();
            else left[i] = -1;
            st.push(i);
        }
        while(st.size()) st.pop(); //cleaning the stackv  
        // right smaller
        for(int i=n-1; i>=0;i-- ){
            while(st.size() && arr[st.top()] >= arr[i] )st.pop(); //poppinng the greater ele
            if(st.size()) right[i]= st.top();
            else right[i] = -1;
            st.push(i);
        }
         for(int i=0; i<n;i++){
            if(left[i] == right[i]) {// if both are -1 
                ans[i] = -1;}
                //if one of them is -1 then other becomes the answer
            else if(left[i] == -1) ans[i]=right[i];
            else if(right[i] == -1) ans[i]=left[i];
            //checking the disatance between right smaller and left smaller as compard with the current position
            else if(i-left[i]< right[i]-i) ans[i] = left[i];
            else if(i-left[i]> right[i]-i) ans[i]=right[i];
                //Checking the height
            else if(arr[right[i]]< arr[left[i]]) ans[i]=right[i];
            // else if(arr[right[i]> arr[left[i]]]) ans=right[i];
            else ans[i] = left[i];
         
         
         }
         
             return ans;
    }
};
