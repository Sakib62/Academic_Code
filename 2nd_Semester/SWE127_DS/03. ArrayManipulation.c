/**
                        -- Course Name : Data Structure --
                        -- Course No   : SWE127, SWE128 --
                        -- Problem No  : 003            --
                        -- Reg Number  : 2019831062     --
        -----------------------------------------------------------------
           Problem Statement :
        -----------------------------------------------------------------
        | Array Manipulation:                                           |
        | 1. Sort the array                                             |
        | 2. Insert new element so that array remains sorted            |
        | 3. Delete an element so that array remains sorted             |
        -----------------------------------------------------------------
*/

#include<stdio.h>
#include<limits.h>
#include <stdio.h>

int main()
{
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	printf("Enter the elements of the array: \n");
	int arr[n+10];
	for(int i = 0; i<n; i++)
    scanf("%d", &arr[i]);

	///sorting the array
	for(int i = 0; i < n; i++)
    {
		for(int j = i+1; j < n; j++)
		{
			if(arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	///printing the array
	printf("\nThe initial Sorted array is: \n");
	for(int i = 0; i < n; i++)
    printf("%d ", arr[i]);
	printf("\n");


    ///Inserting an element

    int val;
    printf("Enter the value you want to insert: ");
    scanf("%d", &val);

    printf("Array after inserting the value is: ");

    int newin[n+1], i;
    for(i=0; i < n; i++)
    {

        if(val < arr[i]) break;
        else newin[i] = arr[i];
    }
    newin[i] = val;
    for(int j = i+1; j <n+1; j++)
    newin[j] = arr[j-1];

    for(i=0; i < n+1; i++)
    printf("%d ", newin[i]);
    printf("\n");

    ///Deleting an element
    printf("\n\nThe initial sorted array is: ");
    for(int i=0; i < n; i++)
    printf("%d ", arr[i]);
    printf("\n");


    printf("Enter the value you want to delete: ");
    scanf("%d", &val);

    int newdel[n-1], p;
    for(p=0; p < n; p++)
    {

        if(val == arr[p]) break;
        else newdel[p] = arr[p];
    }
    if(p==n)
    {
        printf("The value is not in the array!\n");
        return;
    }

    printf("Array after deleting the value is: ");

    for(int j=p+1 ; j<n; j++)
    newdel[j-1] = arr[j];

    for(p=0; p<n-1; p++)
    printf("%d ", newdel[p]);
    printf("\n");

}



