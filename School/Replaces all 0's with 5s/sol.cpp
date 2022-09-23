
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include<sys/wait.h>
 int arr[4]= {1,2,3,4};
void swap(int *xp, int *yp)         /* for swapping the array */
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void printArray(int arr[], int size)   /* For printing the array */
{
    int i;
    for (i=0; i < size; i++)
        printf("%d -\t", arr[i]);
    printf("\n");
}

void selectionSort(int arr[], int n)  /* Selection sort operation for sorting in the descending operation */
{
    int i, j, min_index;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_index = i;
        for (j = i+1; j < n; j++)
          if (arr[j] > arr[min_index])
            min_index = j;
 
        // Swap the found minimum element with the first element
           if(min_index != i)
            swap(&arr[min_index], &arr[i]);
    }
}
 
int main()
{
    int pid;
	pid=fork();
    printf("Pid of the process is %d\n", pid);
    //pid_t wait(int *stat_loc);   

    if(pid==0){                 // Perform the bubble sort operation if the child process is executing
        int n = 4;
        int temp = 0;
       
        printf("Given Array\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d \t ",arr[i]);
        }

        for(int i=0; i<n; i++){
            for(int j =i+1; j<n-1; j++){
                    if(arr[i] > arr[j]){ // sorting in the ascending order
                    temp= arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;     
                    }
            }
        }
        printf("\nBubble sort performed to sort in ascending order\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d \t ",arr[i]);
        }
    }
    
    else{
    	 int cpid;
         cpid=wait(NULL);
            
            int n = sizeof(arr)/sizeof(arr[0]);
            selectionSort(arr, n);
            printf("\nSorted array Using Selection sort in desceding order: \n");
            printArray(arr, n);
            return 0;
    }
    int cpid;
    cpid=wait(NULL);
    printf("Child pid = %d\n", cpid);
    printf("Parent Id is %d", getpid());
	return 0;
}
