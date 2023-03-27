#include<stdio.h>
int main(){
    // check a wether leap year or not
    printf("Enter year : ");
    int year;
    scanf("%d",&year);
    if(year % 4==0){
        printf("%d is leap year",year);
    }else{
        printf("%d is not a leap year",year);
    }
    return 0;
}