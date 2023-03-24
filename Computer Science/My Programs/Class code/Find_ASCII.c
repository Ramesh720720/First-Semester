#include<stdio.h>
int main(){
    char a;
    printf("Enter A Character : ");
    scanf("%s",&a);
    char b;
    printf("Enter B Character : ");
    scanf("%s",&b);
    printf("%c %p %d %s",a,&b,b,b);
    // printf("ASCII for character is : %d\n",a+b);
    // printf("ASCII for character is : %d\n",a-b);
    return 0;
}
