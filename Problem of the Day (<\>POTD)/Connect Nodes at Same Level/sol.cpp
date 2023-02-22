class Solution {
    public void connect(Node root) {
        // code here
 
       if(root == null){ return;}
       Queue<Node> q = new LinkedList<>();
       q.add(root);
       
       while(q.size() > 0){
           int n = q.size();
           Node prev = null;
           for(int i=0; i<n; i++){
               Node  curr = q.poll(); // means pop
               if(prev !=null){
                   prev.nextRight = curr;
               }
               prev = curr;
               if(curr.left !=null){
                   q.add(curr.left);
               }
               if(curr.right != null){
                   q.add(curr.right);
               }
           }
         prev = null;
       }
    }
}
