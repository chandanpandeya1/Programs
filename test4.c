#include <stdio.h>
int main()
{

    //1900,1700
    int year;
    int count=100;

    while (count>0)
    {
        printf("enter the year\n");
        scanf("%d", &year);
        if (((year % 4 == 0) && (year % 100 != 0)) || ((year % 400 == 0)))
        {
            printf("%d is a leap year \n", year);
        }
        else
        {
            printf("%d is not a leap year \n", year);
        }
        count--;
    }

    // if(year%4==0){
    //      if(year%100==0){
    //          if(year%400==0){
    //               printf("%d is a leap year which is divisible by 4, 100, 400 \n", year);
    //          }
    //          else{
    //               printf("%d is not a leap year which is divisible by 4, 100, but not by 400 \n", year);
    //          }
    //      }
    //      else{
    //          printf("%d is a leap year which is divisible by only 4 \n", year);
    //      }
    // }
    // else{
    //      printf("%d is a not leap year which is divisible by only 4 \n", year);
    // }

    //     if (year % 400 == 0)
    //         printf("%d is a leap year \n", year);
    //     else if (year % 100 == 0)
    //         printf("%d is a not leap year\n", year);
    //     else if (year % 4 == 0)
    //         printf("%d is a leap year\n");
    // else
    // printf("%d is not a leap year\n ");
    return 0;
}

///1700%4==0
