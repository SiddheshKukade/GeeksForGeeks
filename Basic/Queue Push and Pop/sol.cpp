
queue<int>_push(int arr[],int n)
{
    queue<int> q ; 
    for(int i=0 ; i<n;i++){
        q.push(arr[i]);
    }
    return q;
}

void _pop(queue<int>s)
{
    //print front and dequeue for each element until it becomes empty
    while(s.front() != NULL){
    cout<<s.front()<<" ";
    
        s.pop();
} }
