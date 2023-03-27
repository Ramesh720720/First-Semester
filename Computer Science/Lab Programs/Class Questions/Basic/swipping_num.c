#include<stdio.h>
int main(){
    int a, b;
    printf("Enter a integer : ");
    scanf("%d",&a);
    printf("Enter a integer : ");
    scanf("%d",&b);
    printf("a = %d and b = %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a = %d and b = %d",a,b);
    return 0;
}