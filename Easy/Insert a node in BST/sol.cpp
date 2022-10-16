
// Function to insert a node in a BST.
Node* insert(Node* root, int key) {
    // We're not changing the structure of our current tree
    // inserted node becomes a leaf node in BST
    
    //if root is null return the key as root
    if(root == NULL){
      Node* n = new Node(key);
      return n;
        // return Node(key);
    }
    //if key is smaller that rooot
    if(root->data > key){
        root->left = insert(root->left, key);
    }else     if(root->data <key){
        root->right = insert(root->right, key);        
    } 
    return root;
}
