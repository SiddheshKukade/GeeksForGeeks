
class Solution{
public:    
    bool isCompleteBT(Node* root){
               //add code here.
        queue<Node * > q; // q hold the current element to check onto
        q.push(root);
        bool left_empty =0; // flag used to find left empty 
        //once the flag is empty that means the tree should be  
        while(!q.empty()){ // queue is not empty
            int s = q.size(); //size as s
            for(int i =0 ; i<s ; i++){  // for 1 element
                Node* cur = q.front(); // current node as cur front returns first element in line
                q.pop(); // delete last element since there is only one element here
                //for left side 
                if(cur->left){
                    if(left_empty) return 0; 
                    q.push(cur->left); // push it to queue to check furthur
                }else{ // no left node
                    left_empty =1 ; // set flag as node empty
                }
                
                //right
                if(cur->right){
                    if(left_empty) return 0; 
                    q.push(cur->right); 
                }else{
                    left_empty =1 ;
                }
                
            }
        }
            return 1 ; // if we dont find left empty the and all goes well 
	}
};
