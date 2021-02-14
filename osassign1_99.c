
#include <stdio.h>

//program for insertion sort
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
	//comparing the current element with key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
	//to complete swapping
        arr[j + 1] = key;
    }
}


// Driver program to test insertion sort
int main()
{
    int n;
    printf("Enter the Size of array : ");
    scanf("%d",&n);
    int arr[n];
    //taking input
    printf("Enter Array Elements : ");
    for(int i=0 ;i<n;i++)
	    scanf("%d",&arr[i]);
    //calling insertion sort function
    insertionSort(arr, n);
    //printing array
    printf("Output array : ");
    for(int i=0;i<n;i++)
	    printf(" %d ",arr[i]);
    return 0;
}

