class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        // Run a nested loop using two integer pointers i and j for 0 <= i < N and 0 <= j < M
// Set B[i][j] equal to A[j][i]here 
    vector<vector<int>> ans = matrix;
            for(int i=0; i<n; i++){
                for(int j = 0 ; j<n ; j++){
                    ans[i][j]=  matrix[j][i];
                }
            }
    matrix = ans;
    }
};
