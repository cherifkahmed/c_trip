#include <stdio.h>

int main(void)
{
    int number = 0,i,rep[10]={0};
    printf("Enter a number:");
    scanf("%d",&number);
    while (number > 0) {
        rep[number % 10] = rep[number % 10] + 1;
        number = number / 10;
    }
    printf("Digits :\t");
    for (i = 0; i < 10; i++) {
        printf("%d ",i);
    
    }

    printf("\nOccurences:\t");
    for (i = 0; i < 10; i++) {
            printf("%d ",i);
    
    }
    return 0;
}
