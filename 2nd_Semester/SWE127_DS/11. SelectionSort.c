/**
        BISMILLAHIR RAHMANIR RAHIM

        SAKIBUL ISLAM
        REGISTRATION NO: 2019831062
        ROLL NO: 62
        SOFTWARE ENGINEERING(4TH BATCH), SUST. */


#include<stdio.h>

void selectionsort(int *a, int n) {

    int cnt = 1;
    for(int i = 0;  i < n - 1; i++) {
        int mini = i;

        for(int j = i+1; j < n; j++) {
            if(a[j] < a[mini])
                mini = j;
        }

        if(mini != i) {
            int tmp = a[mini];
            a[mini] = a[i];
            a[i] = tmp;
        }

        printf("Step %d: ", cnt);
        cnt++;

        for(int k = 0; k < n; k++) printf("%d ", a[k]);
        printf("\n");
    }
}

int main()
{
    int a[]= {3, 6, 2, 8, 9, 10, 1, 5, 4, 7};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Input: ");
    for(int i = 0 ; i < n; i++) printf("%d ", a[i]);

    printf("\n\nApplying Selection Sort: \n\n");
    selectionsort(a, n);

    printf("\nFinal sorted array is : ");
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    return 0;
}
