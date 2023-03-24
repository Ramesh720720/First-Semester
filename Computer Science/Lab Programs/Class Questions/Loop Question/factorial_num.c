#include<stdio.h>
int main(){
    //  3. Find the Factorial of a Number.
    printf("Enter a natural number for get factorial : ");
    int num;
    scanf("%d",&num);
    long long factorial=1;
    printf("\n<------------------------>\n");
    for (int i = num; i >= 1; i--)
    {
        factorial=factorial*i;
    }
    printf("Factorial is : %lld\n",factorial);
    printf("<------------------------>\n");
    return 0;
}