/**
        BISMILLAHIR RAHMANIR RAHIM

        SAKIBUL ISLAM
        REGISTRATION NO: 2019831062
        ROLL NO: 62
        SOFTWARE ENGINEERING(4TH BATCH), SUST. */


#include<stdio.h>

void insertionsort(int *a, int n) {

    int cnt = 1;
    for(int i = 1; i < n; i++) {
        int temp = a[i], j = i - 1;

        while(j >= 0 && a[j] > temp) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;

        printf("Step %d: ", cnt);
        cnt++;

        for(int k = 0; k < n; k++) printf("%d ", a[k]);
        printf("\n");
    }
}

int main()
{
    int a[] = {10, 7, 4, 2, 1, 3};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Input: ");
    for(int i = 0 ; i < n; i++) printf("%d ", a[i]);

    printf("\n\nApplying Insertion Sort: \n\n");
    insertionsort(a, n);

    printf("\nFinal sorted array is : ");
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    return 0;
}