#include<stdio.h>
#include<math.h>
//preprocessor compiler directive (symbolic constant)
#define PI 3.14
#define MAX 180
//symbolic constant defined with uppercase letter
int main(){
   int number ;
   float amount;
   number=100;
   amount=3000.75+700005.35;
   printf("%d\n",number);
   printf("%8.2f\n",amount);
   
   
   printf("area of circle %5.3f\n",PI*PI*5);

   //#define PI 2//invalid syntex to use symbolic constant at main() function
   //PI=3; //illegale syntex
   printf("area of circle %5.3f\n",PI*PI*5);

   //mathematical function
   //ʘ=(PI*MAX)/angle
   float x=(PI/MAX)*90;
   float value=cos(x);

   printf("%13.4f\n",value);
   return 0;
}
