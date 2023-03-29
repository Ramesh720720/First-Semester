#include <stdio.h>
int main()
{
    // subtraction of 2 matrixs
    int row, column, i, j;
    printf("Enter row of matrixes : ");
    scanf("%d", &row);
    printf("Enter column of matrixes : ");
    scanf("%d", &column);
    int matrix1[row][column], matrix2[row][column], result[row][column];
    printf("\nEnter matrixs 1 : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter value on row %d and column %d : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nEnter matrixs 2 : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter value on row %d and column %d : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    int sub = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            sub = matrix1[i][j] - matrix2[i][j];
            result[i][j] = sub;
        }
    }
    printf("\nResult is :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}