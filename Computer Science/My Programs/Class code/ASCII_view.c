#include<stdio.h>
int main(){
   char c1;
   int code;
   int i;
   for ( i = 0; i < 256; i++)
   {
   c1=i;
   printf("%3d = %3.5c \n",c1,c1);
   }
  return 0;
}
