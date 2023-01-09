int turn(Node* root, int n ,char sign ){
    if(root==nullptr) return INT_MAX-1;
    if(root->data ==n) return 0;
    
    int h1=0, h2=0;
    if(sign =='L'){
        h1 = turn(root->left, n, 'L');
        h2= 1+turn(root->right,n,'R');
    }else if(sign == 'R'){
        h1= 1+turn(root->left, n, 'L');
        h2= turn(root->right,n,'R');
    }
    return min(h1,h2);
}
Node* lca(Node*root, int n1, int n2){

    if(root== nullptr){
        return nullptr;
    }
    if(root->data == n1 || root->data == n2){ //if root has a answer
        return root;
    }
    Node* h1 = lca(root->left, n1,n2); // left
    Node* h2 = lca(root->right,n1,n2); // right
    
    if(h1 == nullptr) // no ans on left side
    return h2; // h2 must be the lca
    if(h2==nullptr) // no ans on right side
    return h1; // h1 must be lca
    // if proper elements are found in h1 and h2 or vice a versa then we return the root
    if((h1->data == n1 || h2->data == n2 )  || (h1->data == n2 || h2->data==n1))
      return root;
}
class Solution{
  public:
    // function should return the number of turns required to go from first node to second node 
    int NumberOFTurns(struct Node* root, int first, int second)
    {
        // first we get a lowest common ancestor of the treee
      Node* lc = lca(root, first , second); // we have lowest common ancestor
      
      int turn1 = min(turn(lc,first, 'L'), turn(lc,first,'R'));
      int turn2= min(turn(lc,second,'L'), turn(lc,second, 'R'));
      // if both sum is zero OR if no turns are required
      if(turn1+turn2 ==0 && (lc->data == first || lc->data == second)) return -1 ; 
      //if our lowest common ancestor is a starting OR ending point then just return their sumof turns
      if(lc->data == first || lc->data == second) return turn1+turn2; 
      
      return turn1+turn2+1;
      
    }
};
