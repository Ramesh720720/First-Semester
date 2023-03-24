#include <stdio.h>
int powerFun(int,int);
int main()
{
    int base, power;
    int result = 1, num = 1;
    printf("Enter a base number : ");
    scanf("%d", &base);
    printf("Enter power of number : ");
    scanf("%d", &power);
    powerFun(base,power);
    return 0;
}
int powerFun(int base,int power){
    int result;
    if (power > 1)
    {
        result = base * base;
        for (int i = 1; i < power - 1; i++)
        {
            result = result * base;
        }
        printf("%d", result);
    }
    else if (power == 1)
    {
        printf("%d", base);
    }
    else
    {
        printf("Unable to process this inputs");
    }
}