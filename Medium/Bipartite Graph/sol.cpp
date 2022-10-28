class Solution {
public:
    bool bipartiteBfs(int src, vector<int> adj[], int color[]){
        //true if bipatiite 
        // false if not
        //queue to store the adjacent nodes
        queue<int> q;
        q.push(src); // insert the current element in the queue
        color[src] = 1;  // color the current element as 1 
        while(!q.empty()){ // untill the queue is not empty
            int node= q.front(); // get the first element from queue
            q.pop();
            
            for(auto it : adj[node]){ // iterative over adjacent of the first element of q 
                if(color[it] ==-1){ // if not colored 
                //here just color the node and add to q
                    color[it] =  1 - color[node]; // coloring with the oppsite of the current color
                    // 1 -1 = 0 ; 1- -1 = 
                    q.push(it);// adding it to q to check it again for bipatie
                }else if(color[it] == color[node]){
                    //just check for the bipartite condtion
                    //if current color and adjacent color is same 
                    return false; // then it is not a bipartite graph
                }
            }
        }
        return true; // if trap case is not executed then we can say it bipartite as we have the entire graph correctly
    }
     bool bipartiteDfs(int node, vector<int> adj[], int color[]){
         //this is for the first time calling and not colored 
         if(color[node] == -1 ) color[node] = 1;  /// if node colored the ncolor it
         
            for(auto it : adj[node]){ // iterative over adjacent of the first element of q 
                if(color[it] ==-1){ // if not colored then just color it and keep going in the depth
                    color[it] =  1 - color[node]; // coloring with the oppsite of the current color
                    
                    if(!bipartiteDfs(it, adj, color)){ // recurse over the depth
                        return false; // return false because previous recursive function call was false
                    }
                    
                }else if(color[it] == color[node]){
                    
                    return false; // then it is not a bipartite graph
                }
            }
        return true; // if trap case is not executed then we can say it bipartite as we have the entire graph correctly
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Solving using BFS
	    //color  first with one color and 
	    // then color second with opposite color
	    //RULE :  other adjacent nodes of a node must be colored with it's opposite colors
	    // IF you found out that is breaking the rule then return false as it is not Bipartite Graph.
	   // TC - O ( N + E )
	   // SC -  O ( N + E ) +  O (N) + O(N)
	   int color[V];
	   //set all elements in color as -1
        memset(color , -1 , sizeof color);
        for(int i=0 ; i<V; i++){
            //loop over color of each vertex
            if(color[i] == -1){ // if not colored then color it by calling the function
                if(!bipartiteDfs(i, adj, color)){ 
                    return false;
                }
            }
        }
        return true;
	}

};
