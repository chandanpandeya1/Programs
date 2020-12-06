#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("input a number\n");
    scanf("%d", num);
    if (num >= 0)
        printf("%d is a positive number\n");
    else
        printf("%d is a negative number");
    return 0;
}
