#include <stdio.h>
float square(float a)
{
    return a * a;
}
int main()
{
    printf ("Enter a number : ");
    int num;
    scanf("%d",&num);
    printf("Square of %d is %3.2f",num,square(num));
    return 0;
}