
class Solution {
    int countNumbers(int n) {
 
        // if(n%100 > 55 && n >100){
        //      return (n/100) ==1 ? 30 : (n/100)*30;}
        //   if(n%100 > 55  && n < 100 || n%100 == 0){
        //      return  30;}
        // int rem=n % 10;
        // int remCount = 0;
        // if(rem > 5){
        //     remCount =5;
        // }else {
        //     remCount = rem;
        // }
        // return (((n/10)*5) + remCount);
      int count =0;
      for(int i =1;i<=n;i++)
      {
          String s = i+""; // converting to string
          if(s.contains("6") || s.contains("7") ||s.contains("8") ||
          s.contains("9") ||s.contains("0"))
          {
              continue;
          }
          else
          {
              count++;
          }
       }
      return count;
    }
}
