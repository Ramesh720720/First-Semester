#include <stdio.h>
int a = 62;
int sum()
{
    static int d = 50;
    static int b = 8;
    printf("%d\n", d + b);
    d++;
    b++;
}
int main()
{
    // 1.Auto storage class
    // 2.Extern storage class
    extern int a;
    printf("%d\n", a); // return Garbage value without extern

    // 3.static
    for (int i = 0; i < 4; i++)
    {
        sum();
    }
    //4.register
    register int f=45123;
    printf("%d\n",f);

    //String
    char s[]="Hello";
    printf("%s\n",s);

    return 0;
}