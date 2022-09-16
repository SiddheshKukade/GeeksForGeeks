int strstr(string s, string x)
{
    // int curr=0, init=0;
    // bool flag= true;
    // for(int i=0 ; i<s.size();i++){
    //     // for(int j=0; j<x.size(); j++){         
    //         if(s[i] == x[curr]){
    //             if(flag){
    //             init = i;
    //             }
    //             curr++;
    //             flag = false;
    //         }else{
    //             flag = true;
    //             curr=0;
    //         }
    //         if(curr == x.length()){
    //             return init;
    //         }
    //     }
    //     return -1;
//Your code here
    int post=s.find(x);
    if(post!=string ::npos)
    {
        return post;
    }
    else{
    return -1;}
}
 
