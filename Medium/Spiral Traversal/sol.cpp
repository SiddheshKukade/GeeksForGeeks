class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > mat, int n, int m) 
    {
        // code here
        int left=0, right = m-1;
        int top=0, bottom = n-1;
        vector<int>ans;
        
        while(top<= bottom && left<= right){
            
                    for(int i=left; i<=right; i++){
                        ans.push_back(mat[top][i]);
                    }
                    top++;
                    for(int i=top; i<=bottom; i++){
                            ans.push_back(mat[i][right]);
                    }
                    right--;
                    if(top<= bottom){
                        for(int i=right; i>=left; i--){
                                ans.push_back(mat[bottom][i]);
                        }
                        bottom--;
                    }
                    if(left<= right){
                        for(int i=bottom; i>=top; i--){
                                ans.push_back(mat[i][left]);
                        }
                        left++;
                    }
        }
        return ans;
    }
};
