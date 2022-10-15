/**
                        -- Course Name : Data Structure --
                        -- Course No   : SWE127, SWE128 --
                        -- Problem No  : 004            --
                        -- Reg Number  : 2019831062     --
        -----------------------------------------------------------------
           Problem Statement :
        -----------------------------------------------------------------
        | Bubble Sort:                                                  |
        | 1. Sort an array                                              |
        | 2. Count the number of comparisons                            |
        | 3. Count the number of interchanges                           |
        -----------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int n,comparisons=0,interchanges=0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < n; ++i)
    scanf("%d", &arr[i]);

    ///sorting the array
    for(int i = 0 ; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            comparisons++;
            if(arr[i] > arr[j])
            {
                int p = arr[i];
                arr[i] = arr[j];
                arr[j] = p;
                interchanges++;
            }
        }
    }

    ///printing the sorted array
    printf("\n\nArray after sort is : ");
    for (int i=0; i<n; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nNumber of comparisons = %d\n",comparisons);
    printf("Number of interchanges = %d\n",interchanges);

    return 0;
}
