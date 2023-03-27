#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int boolean = 0;
    int result = 0;
    for (int i = 2; i < num; i++)
    {
        if (boolean == 0)
        {
            if (num % i == 0)
            {
                result = 1;
                boolean = 1;
            }
        }
    }
    if (result == 1)
    {
        printf("Not A Prime Number \n");
    }
    else
    {
        printf("Prime Number \n");
    }
    return 0;
}