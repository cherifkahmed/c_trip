#include <stdio.h>

int main(void)
{
    int number = 0,i,rep[10]={0};
    printf("Enter a number:");
    scanf("%d",&number);
    while (number > 0) {
        rep[number % 10] = rep[number % 10] + 1;
        printf("rep[%d] = %d\n",number % 10,rep[number % 10]);
        number = number / 10;
    }

    printf("Repeated digit(s):");
    for (i = 0; i < 10; i++) {
        if (rep[i] > 1) {
            printf("%d ",i);
        }

    
    }
    return 0;
}
