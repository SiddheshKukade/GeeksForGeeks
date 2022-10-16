
class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    /*
R C   R C 

0 2 - 0 0
0 1 - 1 0
0 0 - 2 0

1 2 - 0 1 
1 1 - 1 1
1 0 - 2 1

2 2 - 0 2 
2 1 - 1 2 
2 0 - 2 2
*/
    void rotateby90(vector<vector<int> >& matrix, int n) 
    {   vector<vector<int>> ans = matrix;
            for(int i=0; i<n; i++){
                int j , l ;
                for(int j = n-1, l=0 ;j>=0 && l<n ; j--){
                    ans[l][i]=  matrix[i][j];
                    l++;
                }
            }
        
    matrix = ans;
    }
    
     
};
