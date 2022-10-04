class Solution {
    static String conRevstr(String S1, String S2) {
       String newStr, ans="";
        newStr= S1+S2;
        for(int i=0; i<newStr.length();i++){
            char ch = newStr.charAt(i);
            ans= ch+ans;
        }
     return ans;
    }
}
