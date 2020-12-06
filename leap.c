#include <stdio.h>
int main()
{
    int year;
    printf("enter the number\n");
    scanf("%d", year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {//2000
                printf("Leap year.");
            }
            else
            {    //1700
                printf("Not leap year.");
            }
        }
        else
        {   //2004
            printf("Leap year.");
        }
    }
    else
    { //2001
        printf("Not leap year.");
    }

    return 0;
}
