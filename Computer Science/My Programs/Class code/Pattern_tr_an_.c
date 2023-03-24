#include <stdio.h>
int main()
{
    int i, j;
    int Op = (5 < 7);
    printf("%d\n", Op);
    if (Op)
        printf("Hello world\n");
    else
        printf("False\n");
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}