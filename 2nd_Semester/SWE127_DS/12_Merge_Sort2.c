/**
        BISMILLAHIR RAHMANIR RAHIM

        SAKIBUL ISLAM
        REGISTRATION NO: 2019831062
        ROLL NO: 62
        SOFTWARE ENGINEERING(4TH BATCH), SUST. */


#include <stdio.h>
typedef long long ll;

int b[1000], cnt = 1;

void merge(int *a, int low, int high) {
    int i, j, mid, k;
    i = low;
    mid = (low + high) / 2;
    j = mid + 1;
    k = low;

    while(i <= mid && j <= high) {
        if(a[i] <= a[j]) {
            b[k] = a[i];
            i++;
        }
        else {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    if(i > mid) {
        while(j <= high) {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else {
        while(i <= mid) {
            b[k] = a[i];
            i++;
            k++;
        }
    }
}

void mergesort(int *a, int low, int high) {

    if(low >= high) return;

    int mid = (low + high ) / 2;

    printf("Step %d: ", cnt);
    cnt++;
    printf("Left subtree: ");
    for(int i = low; i <= mid; i++) printf("%d ", a[i]);

    printf("\tRight subtree: ");
    for(int i = mid + 1; i <= high; i++) printf("%d ", a[i]);
    printf("\n");

    mergesort(a, low, mid);

    mergesort(a, mid + 1, high);

    merge(a, low, high);

    printf("Step %d: ", cnt);
    cnt++;

    printf("Merged array: ");
    for(int i = low; i <= high; i++) {
        a[i] = b[i];
        printf("%d ", a[i]);
    }

    printf("\n");

}

int main()
{
    int a[] = {10, 7, 4, 2, 1, 3};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Input: ");
    for(int i = 0 ; i < n; i++) printf("%d ", a[i]);

    printf("\n\nApplying Merge Sort:\n\n");

    mergesort(a, 0, n - 1);

    printf("\nFinal sorted array is : ");
    for(int i = 0; i < n; i++) printf("%d ", a[i] );
    printf("\n");

    return 0;
}
