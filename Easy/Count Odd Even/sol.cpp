void countOddEven(int ar[], int n) {
    int a=0 ; 
    int b=0;
    for(int i=0; i<n; i++){
        if(ar[i] %2 == 0 ){
            a++;
        }else { b++;}
    }
    cout<<b<<" "<<a;
}
