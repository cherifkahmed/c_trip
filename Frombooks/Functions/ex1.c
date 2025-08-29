#include <stdbool.h>
#include <stdio.h>

void selection_sort(int a[], int n) {
    if (n <= 1) {
        return;
    }

    int largest = 0;
    int i;

    for (i = 0; i < n; i++) {
        if (a[largest] < a[i]) {
            largest = i;
        }
    }

    if (largest != n - 1) {
        int temp = a[largest];
        a[largest] = a[n-1];
        a[n-1] = temp;
    }

    selection_sort(a, n - 1);
}

int main(void) {
    int n = 10;
    int a[n], i;
    printf("Enter %d number: ", n);

    printf("\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    selection_sort(a, n);
    printf("sorted numbers:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
