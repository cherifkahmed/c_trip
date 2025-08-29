#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int a[] = {1, 9, 12, 2, 5, 14, 11, 7};
    int aux;
    int i;

    printf("without\n");
    for (i = 0; i <= 7; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    bool sorted = false;

    while (!sorted ) {
        sorted = true;
        for (i = 0; i <= 6; i++) {
            if (a[i] > a[i+1]) {
                aux = a[i];
                a[i] = a[i+1];
                a[i+1] = aux;
                sorted = false;
            }

        }
    }

    printf("with\n");
    for (i = 0; i <= 7; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
