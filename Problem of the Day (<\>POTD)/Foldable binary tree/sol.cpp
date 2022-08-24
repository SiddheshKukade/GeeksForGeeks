bool fold(Node* root1 ,Node* root2){
    // we have t check that the if ones right exists then others left side should exists then it will be true otherwise it will be false
    // to check that we are passing the nodes in recursion if they are empty then everything is good 
    // if not empty then we will keep on going  deeper in the nodes untill we find the null nodes 
    // or otherwise we will get output as false
if (root1 == NULL&& root2 == NULL ) return true;
if(root1 &&root2){
    return fold(root1->left ,root2->right) // true if left on one right on another
    &&
    fold(root1->right, root2->left); // will true if right on one and left on another exists
    
    return false;
}
    
}
//Function to check whether a binary tree is foldable or not.
bool IsFoldable(Node* root)
{
    // Foldable means left subtree and right subtree should be same strcturewise 
    // means they should be mirror images of each other
    // if a tree is null then it is foldable 
    return fold(root, root);
}
