/**
                        -- Course Name : Data Structure --
                        -- Course No   : SWE127, SWE128 --
                        -- Problem No  : 005            --
                        -- Reg Number  : 2019831062     --
        -----------------------------------------------------------------
           Problem Statement :
        -----------------------------------------------------------------
        | Binary Search:                                                |
        | 1. Search an element                                          |
        | 2. Print all steps of searching                               |
        | 3. Print the total number of steps                            |
        -----------------------------------------------------------------
*/


#include<stdio.h>

void sol(int arr[],int len, int val);

int main()
{
    int arr[1000], len, val;
    printf("Enter the size of the array: ");
    scanf("%d", &len);

    printf("Enter the array elements: ");
    for(int i = 0; i < len; i++) scanf("%d", &arr[i]);

    printf("Enter the element that need to be searched: ");
    scanf("%d", &val);
    sol(arr, len, val);
}

void sol(int arr[], int len, int val)
{
    printf("\n");
    int step = 0;
    int low = 0,up = len - 1;
    int mid = (low + up)/2;

    while(arr[low] <= arr[up])
    {
        step++;
        printf("Step %d : lower_index = %d, upper_index = %d, mid_index = %d\n", step, low, up, mid);
        if(val == arr[mid]) break;
        if(val > arr[mid]) low = mid + 1;
        else up = mid - 1;
        mid = (low + up)/2;
    }

    printf("\n\n");

    if(arr[low] > arr[up])
    {
        printf("Element is not in the array\n");
        printf("Binary search finished at step: %d\n",step);
        return;
    }

    printf("The index of the element in the array is: %d (0 based)\n",mid);
    printf("Total number of steps are: %d\n",step);


}
