
/*The structure of the class is
struct MinHeap
{
    int *harr;
    int capacity, heap_size;
    MinHeap(int cap) {heap_size = 0; capacity = cap; harr = new int[cap];}
    int extractMin();
    void deleteKey(int i);
    void insertKey(int k);
    int parent(int i);
    int left(int i);
    int right(int i);
};*/



//Function to extract minimum value in heap and then to store 
//next minimum value at first index.
int MinHeap::extractMin() 
{
    // Your code here
    if(heap_size <=0) return -1;
    if(heap_size == 1) {
        //if only one exists then return the root as it's only one
        heap_size--;
        return harr[0];
    }
    int root = harr[0];
    //making the last element as the first element
    harr[0] = harr[heap_size -1 ];
    harr[heap_size -1 ] = 0 ; // making the last element as zero
    heap_size--; // reduce the size
    
    MinHeapify(0);
    //after mean heapify the ans will be at the root 
    // that is why we are returning root here.
    return root;
}

//Function to delete a key at ith index.
void MinHeap::deleteKey(int i)
{
    if(i < heap_size){
        //decreasing value at ith index to minimum int value
        decreaseKey(i , INT_MIN);
        //extracting the minimum value from heap
        extractMin();
    }
}

//Function to insert a value in Heap.
void MinHeap::insertKey(int k) 
{
    //parent should be less than left and right childs to make it valid MinHeap
    //if empty insert at first pos
    // if not empty then insert at proper position
    heap_size++;
    int  i = heap_size -1;
    harr[i]= k ; // stroing the key at last initially
    //swapping values of ith index with its parent 
    //if parent  is greater
    while(i !=0 && harr[parent(i)] > harr[i]){ // if parent is grater than current 
        swap(harr[i], harr[parent(i)]); //swapping them 
        i = parent(i); // make parent as  a current element
    }
}

//Function to change value at ith index and store that value at first index.
void MinHeap::decreaseKey(int i, int new_val) 
{
    harr[i] = new_val;
    while (i != 0 && harr[parent(i)] > harr[i]) {
        swap(harr[i], harr[parent(i)]);
        i = parent(i);
    }
}

/* You may call below MinHeapify function in
   above codes. Please do not delete this code
   if you are not writing your own MinHeapify */
void MinHeap::MinHeapify(int i) 
{
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < heap_size && harr[l] < harr[i]) smallest = l;
    if (r < heap_size && harr[r] < harr[smallest]) smallest = r;
    if (smallest != i) {
        swap(harr[i], harr[smallest]);
        MinHeapify(smallest);
    }
}
