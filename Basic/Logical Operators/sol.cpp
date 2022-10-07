
void logicOp(int a, int b)
{
    /*output (a&&b), (a||b), and ((!a)&&(!b))separated by spaces*/ 
    if(a&&b){
    cout<<1<<" ";
    }else
    {
    cout<<0<<" ";
    }
    
    if(a||b){
    cout<<1<<" ";
    }else
    {
    cout<<0<<" ";
    }
    if(((!a)&&(!b))){
    cout<<1<<" ";
    }else
    {
    cout<<0<<" "<<endl;
    };
    // cout<<(a&&b)<<" "<<(a||b)<<" "<<(!a && !b)<<endl;
}
