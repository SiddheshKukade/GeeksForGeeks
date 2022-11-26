

/*

Definition for Binary Tree Node
class Node
{
    int data;
    Node left;
    Node right;
    
    Node(int data)
    {
        this.data = data;
        left = null;
        right = null;
    }
}
*/

class Solution {
    public static Node treeFromString(String s) {
        int[] idx=  new int[]{0}; // to store our index value
        // we can also use index as a global varaible 
        //here just to try something different we are usingn this array approach
        return dfs(idx,s); // returns the root of the tree 
    }
    static Node dfs(int[] idx, String s){
        
        // BASE cases - The base case is a way to return without making a recursive call. In other words, it is the mechanism that stops this process of ever more recursive calls
        if(idx[0] >= s.length() || s.charAt(idx[0]) == ')'){
            idx[0]++;
            return null; // No children 
        } // if reached the end OR if closing brace is found
        //first number can be one digit or can be multiple digits.
        int num =0;
        while(idx[0] < s.length() && Character.isDigit(s.charAt(idx[0]))){ // if we're still in range and the current char is a number
            num = num * 10 + (s.charAt(idx[0]) - '0'); 
            idx[0]++;// doing -0 will store it as a integer 
            //append the entire number ignoring the brackets
            // appending number to it's next decimal place using num* 10 
        }
        // creating a root node
        Node head = new Node(num);
        // Now Entering inside the braces
        if(idx[0] < s.length() && s.charAt(idx[0]) == '('){
            idx[0]++;
            // call again from left side and keep attaching the nodes recursively
            head.left = dfs(idx,s);
        }
        if(idx[0] < s.length() && s.charAt(idx[0] )== '('){
                idx[0]++;
            // call again from right side and keep attaching the nodes recursively.
                head.right= dfs(idx,s);
        }
        idx[0]++; // incrementing index anyways so that we don't get stuck in any eay
        return head;
        
    }
}
        
