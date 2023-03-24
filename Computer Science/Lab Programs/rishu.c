#include<stdio.h>
#include<conio.h>
int main()
{
int a=2,b=1,c,d,e,f,g;
c=a<b;
d=a>b;
printf("%d\n",c);
printf("%d\n",d);
e=c>b;
f=c<b;
printf("%d\n",e);
printf("%d\n",f);
g=(a>b)&&(c<b);
printf("%d",g);
return 0;
}
