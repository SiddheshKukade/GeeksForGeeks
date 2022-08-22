
int* game_with_number(int arr[], int n)
{
    
    // Perform XoR of consecutive elments of array :
    for(int i =0 ; i< n-1; i++){
        arr[i] = arr[i] ^ arr[i+1];
    }
    return arr;
    
}
