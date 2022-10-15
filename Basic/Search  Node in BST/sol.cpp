bool search(Node* root, int x) {
    if(root){
        if(root->data  == x){
            return true;
        }else if(root->data >x){
           return  search(root->left, x);
        }else if (root->data<x){
          return   search(root->right,  x);
        }
    }
    return false;
}
