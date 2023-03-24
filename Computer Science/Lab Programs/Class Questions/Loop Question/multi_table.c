#include<stdio.h>
int main(){
    // 2. Generate a Multiplication Table.
    int table;
    printf("Enter a number for generate a table : ");
    scanf("%d",&table);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %2d = %2d\n",table,i,table*i);
    }
    return 0;
}