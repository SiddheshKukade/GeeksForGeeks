class Solution{
public:
//function to check the possiblity of coluring the current vertext
//with current colors with corresponding to the it's adjacent vertexes. 
bool isSafe(int node , int color[] , bool graph[101][101] , int n , int col){
    for(int k=0; k<n;k++){
        //go over entire adjacent nodes 
        if(k != node && graph[k][node] == 1 && color[k] ==col )// if k is not current number and k is adj to node and color of 
        //k is the same of currently selected color then return false because it's adjacent is having the same coors 
        // k!= node is done to make sure that it doesn't checks with itself lik graph[node][node];
        return false;
    }
        return true; // if not returned then finally we can return as true
}
bool solve(int node, int color[] , int m , int N , bool graph[101][101]){
    //base case when the answer is reached
    if(node == N ) return true;
    
    for(int i=1; i<=m; i++) { //iterate over all colors
    if(isSafe(node, color, graph, N , i)){
        color[node] = i ; // set the color
        if(solve(node+1, color , m , N , graph)) return true; // procced with furthur recursions
        
        color[node] = 0; // backtracking just in case answer is not found
        }
    }
    return false;
}
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool graphColoring(bool graph[101][101], int m, int N) {
        //TC -> N^m
        // basically check whether the graph can be colored with m number of colors or not so that it 
        // remains biparatite meaning no two adjacent colors are the same.
        // is posibie solution is found then don't go for more answer combo because
        // here we just have to return answer in form of true or false;
        int color[N] = {0}; // n sized nodes array
        // graph provided here is just the adjacancy matrix
        if(solve(0,color,m,N,graph)) return true; // caalling starting with the 0 th index
        return false; // if true is not returned means ans is not available
    }
};
