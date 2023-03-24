#include<stdio.h>
int main(){
    char a;
    char b;
    printf("Address : %p %p \n",&a,&b);
    printf("Enter A Character : ");
    scanf("%c",&a);
    printf("ASCII for character is : %d\n",a);
    printf("Enter B Character : ");
    scanf("%c",&b);
    printf("ASCII for character is : %d\n",b);
    printf("ASCII for character is : %d %d\n",a ,b);
    printf("ASCII for character is : %p %p\n",&a ,&b);
    return 0;
}

