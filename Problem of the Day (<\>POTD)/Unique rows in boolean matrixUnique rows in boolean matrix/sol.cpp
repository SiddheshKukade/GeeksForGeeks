Given a binary matrix your task is to find all unique rows of the given matrix in the order of their appearance in the matrix.

class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
           ///push every row in linked Hashset
        ///iterate over it 
      set<vector<int>> st;
        vector<vector<int>> ans;
       
       for(int i=0; i<row; i++){
          vector<int> temp;
            for(int j=0;j<col;j++){
                temp.push_back(M[i][j]);
            }
            if(st.find(temp) == st.end()){
                ans.push_back(temp);
                st.insert(temp);
            }
       }
        return ans;
    }
};
