vector<int> find(int arr[], int n , int x )
{
    bool f = false;
    // code here
    int first=-1, last=-1;
    for(int i=0; i<n ; i++){
        if(arr[i] == x ){
            if(!f) {first = i;
                f =true;
                
            }
            last =i;
        }
    }
    return{first,last};
}
