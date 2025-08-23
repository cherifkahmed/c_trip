#include <stdio.h>

int main(void)
{
    int mat[5][5], i, j, sum_row, sum_col;
    for (i = 0; i < 5; i++) {
        printf("Enter row %d: ",i+1);
        for (j = 0; j < 5; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    // GET THE ROW TOTAL
    printf("Row totals: ");
    for (i = 0; i < 5; i++) {
        sum_row = 0;
        for (j = 0; j < 5; j++){
            sum_row += mat[i][j];
        }
        printf("%d ",sum_row);
    }
    // GET THE COLUMN TOTAL
    printf("\nColumn totals: ");
    for (i = 0; i < 5; i++) {
        sum_col = 0;
        for (j = 0; j < 5; j++){
            sum_col += mat[j][i];
        }
        printf("%d ", sum_col);
    }
    return 0;
}
