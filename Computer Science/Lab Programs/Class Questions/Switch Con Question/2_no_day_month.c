#include <stdio.h>
int main()
{
    // print number of days in month
    printf("Please enter index number of month : ");
    int month_No;
    scanf("%d", &month_No);
    switch (month_No)
    {
    case 1:
        printf("January : 31 Days");
        break;
    case 2:
        printf("February : 28 Days");
        break;
    case 3:
        printf("March : 31 Days");
        break;

    case 4:
        printf("April : 30 Days");
        break;

    case 5:
        printf("May : 31 Days");
        break;

    case 6:
        printf("June : 30 Days");
        break;

    case 7:
        printf(" July : 31 Days");
        break;
    case 8:
        printf("August : 30 Days");
        break;
    case 9:
        printf("September : 31 Days");
        break;
    case 10:
        printf("Octomber : 30 Days");
        break;
    case 11:
        printf("November : 31 Days");
        break;
    case 12:
        printf("December : 30 Days");
        break;
    default:
        printf("Something Went wrong");
        break;
    }
    return 0;
}