#include <stdio.h>
int sum(int, int);
int sub(int, int);
int multi(int, int);
float divide(float, float);
int main()
{
    int a, b;
    char c;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Enter operator : ");
    getchar();
    scanf("%c", &c);
    printf("Enter a number : ");
    scanf("%d", &b);
    switch (c)
    {
    case '+':
        printf("Result is : %d", sum(a, b));
        break;
    case '-':
        printf("Result is : %d", sub(a, b));
        break;
    case '*':
        printf("Result is : %d", multi(a, b));
        break;
    case '/':
        printf("Result is : %f",divide(a, b));
        break;
    default:
        printf("Invalid input");
        break;
    }
    return 0;
}
int sum(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int multi(int x, int y)
{
    return x * y;
}
float divide(float x, float y)
{
    return x/y;
}
