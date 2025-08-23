// #include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) {
    char board[10][10], letter = 'A';
    int i, j;
    int random_direction = 1;
    bool stuck = false;
    bool out = false;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            board[i][j] = '.';
        }
    }
    i = 0;
    j = 0;

    while (letter < 'Z' && !stuck) {
        srand(time(NULL));
        random_direction = rand() % 4;
        switch (random_direction) {
            case 0: j--; break;
            case 1: i--; break;
            case 2: j++; break;
            case 3: i++; break;
            default: printf("not a valid direction"); break;
        }
        if (i < 0 || i > 10 || j < 0 || j > 10) {
            out = true;
        }
        while (out) {
            srand(time(NULL));
            random_direction = rand() % 4;
            switch (random_direction) {
                case 0: j--;printf("j = %d",j); break;
                case 1: i--; printf("i = %d",i);break;
                case 2: j++; printf("j = %d",j);break;
                case 3: i++; printf("i = %d",j);break;
                default: printf("not a valid direction"); break;
            }
            if (!(i < 0 || i > 10 || j < 0 || j > 10)) {
                out = false;
            }
        }
        if (board[i][j] != '.') {
            printf("Fix that shit man");
            continue;
        }
        board[i][j] = letter;
        letter++;

    }



    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    return 0;
}
