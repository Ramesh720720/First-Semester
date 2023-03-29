#include<stdio.h>
int main(){
    int x=20;
    int *p;
    p=&x;
    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",&p);
    printf("%d\n",*p);
    return 0;
}