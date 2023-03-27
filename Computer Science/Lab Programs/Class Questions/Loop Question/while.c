#include<stdio.h>
int main(){
   //Itersion => overwrite memory location
   //recursion => create new momery
   // continuous run while condition true
   int input_num;   int sum=0,sum2=0;
   int d=100;
   printf("Enter a number : ");
   scanf("%d",&input_num);
   int num2=input_num;
   while(input_num>=9){
      sum=input_num%10;
      //printf("%d\n",sum);
      input_num=input_num/10;
      //printf("%d\n",input_num);
      if(input_num<=9){
          //sum2=sum*sum2*input_num;
          sum2=sum+sum2+input_num;
      }else{
      sum2=sum+sum2;
   }
     
}

 printf("sum of number %d is %d\n",num2,sum2);
//    while(num2>=9){
//      sum=num2%10;
//      //printf("%d\n",sum);
//      num2=num2/10;
//      //printf("%d\n",input_num);
//      if(num2<=9){
//          sum2=sum*sum2*num2;
//      }else{
//      sum2=sum+sum2;
//   }
//
//}
//printf("mul of number %d\n",sum2);
    //printf("Sum %d\n",sum2);
   
   
    printf("\n\n-------\n\n");
   
   
   int a=1;
   while(a<=10){
      printf("%d\n",a);
      a=a+1;
   }
   printf("\n\n-------\n\n");
   
   int n=20;
   while(n>=10){
      printf("%d\n",n);
      n=n-1;
   }
   return 0;
}
