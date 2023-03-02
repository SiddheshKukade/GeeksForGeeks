
class Solution{
public:
    int minCost(vector<vector<int>> &costs) {
        // no  of walls
        int n = costs.size();
        // no of colors
        int k = costs[0].size();
        // if more than 1 walls and and only one color then not possible to color
        if(k ==1 && n >1)  return -1; 
        // if no color or no wall then return -1
        else if (k ==0 || n ==0) return -1;
        // create two temp varaibles for comparisions
        int first = INT_MAX , sec= INT_MAX;
        // iterating over all the colors of  first wall
        for(int i=0; i<k;i++){
            //set the var for first ans second min val 
            if(costs[0][i]< first){
                sec= first;
                first = costs[0][i];
            }
            else if(costs[0][i]< sec){
                sec = costs[0][i];
            }
        }
        for(int i=1;i<n;i++){
            int firall = INT_MAX, secall= INT_MAX;
            // iterating second wall and so on..
            for(int j=0; j<k;j++){
                if(costs[i-1][j] == first) //if previos color is selected
                    costs[i][j] += sec; // use second
                else 
                    costs[i][j] += first; // else use first
                    
                if(costs[i][j] < firall){  // upte thet first and secondd minimum numbers
                    secall = firall; 
                    firall = costs[i][j];
                }else if(costs[i][j] < secall){
                    secall = costs[i][j];
                }
               
            }
             //update the previous first and second smallest values 
                first  = firall;
                sec= secall;
        }
            return first;
    }
};
