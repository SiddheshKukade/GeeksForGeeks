
//Function that constructs BST from its preorder traversal.
public static Node post_order(int pre[], int size) 
{
       //code here
        Node root  = new Node(pre[0]); // created root
        for(int i =1 ; i<size ; i++){
            root=dfs(pre[i], root);
        }
        return root;
}
static Node dfs(int  key , Node head){
    if(head==null) {
        Node node = new Node(key);
        return node;
    }
    if(key<head.data){
        head.left= dfs(key, head.left); // if more vales left
    }else {
        head.right = dfs(key, head.right); // passed on to the right
    }
    return head ; 
}  
