#include <stdio.h>
int main()
{
    for (int i = 0; i < 7; i++)
    {
        if (i == 3)
        {
            printf("STOP !\n");
            break;
        }
        else
        {
            printf("%d\n", i);
        }
    }
    int i = 1;
    do
    {
        if (i == 4)
        {
            printf("CONTINUE AND SKIP NEXT");
        }
        else
        {
            printf("%d\n", i);
        }
        i++;
    } while (i < 7);

    printf("\n");
    printf("\n");
    printf("\n");
    i = 1;
IF_CONDITION:
   for (int j = 0; j < 3; j++)
   {
    printf("GOTO RUNNING\n");
   }
   
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            printf("GOTO CAME\n");
            goto IF_CONDITION;
        }
        else
        {
            printf("GOTO IS COMIMG\n");
        }
    }

    return 0;
}