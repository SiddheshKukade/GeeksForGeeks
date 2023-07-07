class Solution {
  public:
    vector<vector<int>> sortedMatrix(int n, vector<vector<int>> mt) {
        // code here
        int m = mt[0].size();
        vector<int> v; 
        vector<vector<int>> w;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
            v.push_back(mt[i][j]);
            }
        }
        sort(v.begin(),v.end());
            vector<int> t;
            int k=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
           mt[i][j] = v[k];
           k++;
            }
        }
        return mt;
        }
};
