class Solution {
    public static int solve(int a, int b) {
        if(a==b){
            return 0;
        }
        if((a & b) == a || (b&a) ==b) return 1;
        
        return 2;
    }
}
        
