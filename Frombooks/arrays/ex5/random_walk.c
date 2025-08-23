

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main(void) {
    int i,j,old_i,old_j;
    char board[10][10],next_char = 'A';
    int r_num = rand() % 4;

    //filling the table

    for (i = 0; i < 10; i++) {

        for (j = 0; j < 10; j++) {
            board[i][j] = '.';
        }
    }

    // Doing the pikaboo stuf
    srand(time(NULL));
    i = 0;
    j = 0;
    old_i = i;
    old_j = j;
    board[i][j] = next_char;
    bool stuck = false;
    while (next_char < 'Z') {
        r_num = rand() % 4;
        switch (r_num) {
            case 0: j--; printf("j = %d\n",j); break;
            case 1: i++; printf("i = %d\n",i); break;
            case 2: j++; printf("j = %d\n",j); break;
            case 3: i--; printf("i = %d\n",i); break;
            default: printf("out of range");
        }
        if (i >= 0 && j >= 0 && i < 10 && j < 10 && board[i][j] == '.') {
            if (board[i - 1][j] != '.' &&
                board[i + 1][j] != '.' &&
                board[i][j - 1] != '.' &&
                board[i][j + 1] != '.') {
                goto display;
            }
            next_char++;
            board[i][j] = next_char;
            old_i = i;
            old_j = j;
        }else {
            i = old_i;
            j = old_j;
        }

    }





    // displaying the table 
display : 
    printf("\n");
    if (next_char != 'Z') {
        board[i][j] = next_char + 1;
    }
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%c ",board[i][j]);
        }
        printf("\n");
    }
    return 0;
}
