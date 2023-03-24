#include <stdio.h>
int main()
{
    printf("Enter a Number : ");
    int num;
    scanf("%d", &num);
    printf("%d", num);
    char name;
    printf("Enter Your Name : ");
    scanf("%s", &name);
    printf("Hello %s\n",name);
    return 0;
}