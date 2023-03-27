#include<stdio.h>
int main(){
   int a,b,c;
   printf("Enter first number : ");
   scanf("%d",&a);
   printf("Enter Second number : ");
   scanf("%d",&b);
   printf("Enter third number : ");
   scanf("%d",&c);
   if(a>b){
      if(a>c){
         printf("%d",a);
      }else{
         printf("%d",c);
      }
   }
   else{
    if(b>c){
      if(b>c){
         printf("%d",b);
      }
      else
      {
         printf("%d",c);
      }
   }
   }
   return 0;
}
