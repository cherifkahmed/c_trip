#include <stdint.h>
#include <stdio.h>

int main(void) {
    char msg[80];
    int8_t shift_amount;
    int i = 0;

    printf("Enter message to be encrypted: ");
    scanf("%s", msg);

    printf("Enter shift amount (1-25): ");
    scanf("%hhd", &shift_amount);

    printf("Encrypted message: ");
    while (msg[i] != '\0') {
        if (msg[i] >= 'A' && msg[i] <= 'Z') {
            msg[i] = ((msg[i] - 'A') + shift_amount) % 26 + 'A';
        }

        if (msg[i] >= 'a' && msg[i] <= 'z') {
            msg[i] = ((msg[i] - 'a') + shift_amount) % 26 + 'a';
        }
        printf("%c",msg[i]);
        i++;
    }
    printf("the msg = %s",msg);
    printf("\nDecrypted msg: ");
    i = 0;
    while (msg[i] != '\0') {

        if (msg[i] >= 'A' && msg[i] <= 'Z') {
            msg[i] = ((msg[i] - 'A') - shift_amount) % 26 + 'A';
        }

        if (msg[i] >= 'a' && msg[i] <= 'z') {
            msg[i] = ((msg[i] - 'a') - shift_amount) % 26 + 'a';
        }
        printf("%c",msg[i]);
        i++;
    }

    return 0;
}














