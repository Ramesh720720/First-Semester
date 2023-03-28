#include<stdio.h>
int main(){
    int input;
    printf("how many times squence to be run : ");
    scanf("%d",&input);
     int start=0; 
     int num=1;
    for (int i = 1; i <= input; i++)
    {
        num=start+num;
        printf("%d\t",num);
        start=start+num;
        printf("%d\t",start);
    }
    return 0;
}