#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int i = 0;
    char message[100],c;
    printf("Enter message:");
    while (scanf("%c",&c) == 1 && c != '\n') {
        message[i++] = c;
    }
    message[i] = '\0';
    printf("In BIFF-speak:");
    i = 0;
    while (message[i] != '\0') {
        switch (toupper(message[i]) ) {
            case 'A': 
                printf("4"); break;
            case 'B': 
                printf("8"); break;
            case 'E': 
                printf("3"); break;
            case 'I': 
                printf("1"); break;
            case 'O': 
                printf("0"); break;
            case 'S': 
                printf("5"); break;
            default: 
                printf("%c",toupper(message[i])); break;
        }
        i++;
    }
    printf("!!!!!!!!!!");

    return 0;
}
