#include <stdio.h>
int main()
{
    // subtraction of 2 matrics
    int row, column, i, j;
    printf("Enter row of matrices : ");
    scanf("%d", &row);
    printf("Enter column of matrices : ");
    scanf("%d", &column);
    int matric1[row][column], matric2[row][column], result[row][column];
    printf("\nEnter matrics 1 : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter value on row %d and column %d : ", i, j);
            scanf("%d", &matric1[i][j]);
        }
    }
    printf("\nEnter matrics 2 : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter value on row %d and column %d : ", i, j);
            scanf("%d", &matric2[i][j]);
        }
    }
    int sub = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            sub = matric1[i][j] - matric2[i][j];
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