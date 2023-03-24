#include <stdio.h>
int main()
{
    // 1.Calculate the Sum and average of Natural Numbers
    int start_num, end_num;
    printf("Enter starting  natural number : ");
    scanf("%d", &start_num);
    printf("Enter Ending of natural number : ");
    scanf("%d", &end_num);
    printf("\n<------------------------>\n");
    if (start_num < end_num)
    {

        int sum = 0;
        int count = 0;
        for (int i = start_num; i <= end_num; i++)
        {
            sum = sum + i;
            count = count + 1;
        }
        printf("Sum is : % d\n", sum);
        float avg = sum / count;
        printf("Average is : %8.2f\n", avg);
    }
    else
    {
        printf("Starting number is greater then Ending number.\n");
        printf("Try again\n");
    }
    printf("<------------------------>\n");
    return 0;
}