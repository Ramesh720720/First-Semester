#include<stdio.h>
#include<math.h>
int main(){
    //Single Character constant
    printf("%c\n",'a');
    printf("%d\n",'a');
    printf("%c\n",65);



    //real interger
    printf("%ld\n",5.23e+1);
    printf("%ld\n",7.5e9);
    printf("%ld\n",7.5E+4);
    




    //trigraphs 
    // printf("??( HEllo ??)");


    //sifeof variables
    int a;
    int SizeOfInt=sizeof(a);
    printf("int size %d\n",SizeOfInt);
    float b;
    int SizeOfFloat=sizeof(b);
    printf("float size  %d\n",SizeOfFloat);
    char c;
    int sizeChar=sizeof(c);
    printf("size of char %d\n",sizeChar);
    long d;
    int sizeOfLong=sizeof(d);
    printf("long size %d\n",sizeOfLong);
    double e;
    int SizeOfdouble=sizeof(e);
    printf("double size %d\n\n",SizeOfdouble);
    


    //blackslash character constants
    printf("new line !\n");//new line
    printf("horizontal Tab !\t");// horizontal Tab
    printf("vertical Tab !\v");// vertical Tab
    printf("audible alert (bell) !\a");// audible alert (bell)
    printf("back space !\b");//back space
    printf("carriage return !\r");
    printf("\'single quote !\'");
    printf("\"double quote !\"");
    printf("form feed\f");
    printf("question mark\?");
    printf("backslash\\");
    printf("null\0");

    return 0;
}