class Solution{
       Map<String, Integer> map = new HashMap<>();
    public int duplicateSubtreeNaryTree(Node root){
       // Code here
       int ans=0;
       solve(root);
       for(Map.Entry<String, Integer> e: map.entrySet()) //
           if(e.getValue()>1) ans++; // only increase ans for duplicate sequences
          
        return ans;
    }
       String solve(Node root){
           String s= root.data+"";
           for(Node nei: root.children)
           s += solve(nei);
           
           map.put(s,map.getOrDefault(s,0)+1); // we are saving the occurences of tree sequence 
        //   in maps    
           return s;
       }
}
