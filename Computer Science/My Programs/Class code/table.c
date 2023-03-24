#include<stdio.h>
int main(){
   int a=1;
   int b=1;
   printf("Please enter a number : ");
   int count;
   scanf("%d",&count);
   if(count>20){
   printf("Please enter value less than 20 : ");
   scanf("%d",&count);
   }
   printf("\n\n\n\n\n");
   while(a<=20){
      int num=0;
      while(b<=count){
         num=a*b;
         if(b<=count-1){
            printf("%d\t",num);
         }else{
            printf("%d\n",num);
         }
         b++;
      }
      a++;
      b=1;
   }
   printf("\n\n\n\n\n\n\n");
   return 0;
}
