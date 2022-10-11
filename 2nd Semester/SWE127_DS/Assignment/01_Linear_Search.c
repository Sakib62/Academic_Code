/**
                        -- Course Name : Data Structure --
                        -- Course No   : SWE127, SWE128 --
                        -- Problem No  : 001            --
                        -- Reg Number  : 2019831062     --
        -----------------------------------------------------------------
           Problem Statement :
        -----------------------------------------------------------------
        | Using "Linear Search", find the largest and the smallest data |
        | from a dataset.                                               |
        -----------------------------------------------------------------
*/


#include<stdio.h>
#include<limits.h>
int main()
{

    int len;
    printf("Enter the size of the dataset: ");
    scanf("%d", &len);

    int arr[len];
    printf("Enter the values of the dataset: ");
    for(int i=0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    int mx=INT_MAX, mn=INT_MIN;
    for(int i=0; i < len; i++)
    {
        if(arr[i] < mx) mx = arr[i];
        if(arr[i] > mn) mn = arr[i];
    }

    printf("\n\nSmallest value of the dataset is: %d\n",mx);
    printf("Largest value of the dataset is: %d\n",mn);

}
