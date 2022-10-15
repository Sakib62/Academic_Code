/**
        BISMILLAHIR RAHMANIR RAHIM

        SAKIBUL ISLAM
        REGISTRATION NO: 2019831062
        ROLL NO: 62
        SOFTWARE ENGINEERING(4TH BATCH), SUST. 
*/


#include <stdio.h>
typedef long long ll;

int b[1000000], cnt = 1, n;

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

    printf("\t\t\tStep %d: ", cnt);
    cnt++;
    for(i = low; i <= high; i++) { a[i] = b[i]; } //cout << a[i] << " ";}

    for(i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

void mergesort(int *a, int low, int high) {

    if(low >= high) return;

   // if(low < high) {
    int mid = (low + high ) / 2;
    mergesort(a, low, mid);
    mergesort(a, mid + 1, high);

    merge(a, low, high);
   // }

}

int main()
{
    //int n;
    n = 9;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter elements: ");
    for(int i = 0 ; i < n; i++) scanf("%d", &a[i]);

    printf("\nApplying Merge Sort:\n");
    mergesort(a, 0, n - 1);

    printf("\nFinal sorted array is : ");
    for(int i = 0; i < n; i++) printf("%d ", a[i] );

    printf("\n");

    return 0;
}


