
 class Solution{
     
  static  HashMap<String, Boolean> map;
    static boolean isScramble(String S1,String S2)
    {
        //code here
        map = new HashMap<>();
        return fun(S1,S2);
    }

    static boolean fun(String S1, String S2)
    {
        int n = S1.length(); // length of first stirng both will hae same length by default.
        if(S1.equals(S2))
        {
            map.put(S1+S2 , true); // storing that combo that is already true so that we don't have to compute the same thing again
            return true;
        }
        if(map.containsKey(S1+S2)) // check if the combo is already computer
        {
            return map.get(S1+S2); // if yes the get it's answer insted of chekcing again.
        }

        for(int i=1; i<n; i++)
        {
            //1st case Normal order
            //breaking string one by one and swapping it with different combinations to check if it matches with each other.
            String a = S1.substring(0,i);
            String b = S2.substring(0,i);
            
            String c = S1.substring(i,n);
            String d = S2.substring(i,n);
            if(fun(a,b) && fun(c,d))
            {
                map.put(S1+S2, true); // using memo as map storing the result
                return true;
            }

            // 2nd case maybe in reverse order
            String e = S1.substring(0,i);
            String f = S2.substring(n-i,n);
            
            String g = S1.substring(i,n);
            String h = S2.substring(0,n-i);
            if(fun(e,f) && fun(g,h))
            {
                map.put(S1+S2, true); // using memo as map storing the result
                return true;
            }

        }
        map.put(S1+S2, false);
        return false;
    }
}
