
class Solution{
    public:
    string makeEven(string s)
    {
//         int ele=0;
//         for(int i= 0;i>=s.length();i++){
//             if((int)s[i] % 2 ==0 && s[s.size()-1]-'0' > s[i]-'0' ){
//                 ele = i;
//                 swap(s[ele], s[s.length()-1]); 
//                 break;
//             }
//         }
//       // return to_string(ele);
      
//     //   if (ele!=0)
// //return to_string(s.length());
// // //     }
//         return s;
//     }
//         int n=s.size();
//         if(n==1){
//             return s;
//         }
//         int last=n-1;
//          for(int i=0;i<s.size();i++){
//             if(s[i]%2==0 && s[i]<s[n-1]){ // if curr is even and curr is smaller than last element.
//                 swap(s[i],s[n-1]); // swap curr with the last element
//                 return s; // rturn because we have sawapped the last one
//             }else if(s[i]%2==0){ // if current is even
//                 last=i; // update the last with i
//             }
//         // swap(s[last],s[n-1]); // swap last with actual last.
//         return s;
//         }
        int swapi=-1,i;
      for(i=0; i<s.size(); i++) // from left to right
        {
            if(!((s[i]-'0')&1)) // if even
             {
                 swapi=i;// update swap index
                 if(s[s.size()-1]-'0' > s[i]-'0') // if last is greater than current 
                  break; // break out
             }
            
        } 
        if (swapi>-1) swap(s[swapi], s[s.size()-1]); // swap with swapindex and size
        
        return s;
       
    }
};
