 
class Solution {
    public:
    void help(vector<vector<int>> &arr,int i, int j, int M , int N){
        if(i<0 or j<0 or i==N or j==M or arr[i][j] ==0) return; //not possible
        arr[i][j]=0;
        //trying in all other directions
        help(arr, i+1, j, M , N);
        help(arr, i-1, j, M , N);
        help(arr, i, j+1, M , N);
        help(arr, i, j-1, M , N);

    }
    int closedIslands(vector<vector<int>>& matrix, int N, int M) {
        int ans=0;
        for(int i=0;i<N;i++){
         for(int j=0;j<M;j++){
            if(matrix[i][j]==1){
                if(i==0 or j==0 or i==N-1 or j==M-1){
                    help(matrix,i,j, M , N);
                }
            }
         }   
        }
        for(int i=0;i<N;i++){
         for(int j=0;j<M;j++){
            if(matrix[i][j]==1){
                ans++;
                help(matrix,i,j, M ,N);
                }
            }
         }   
        return ans;
    }
};
