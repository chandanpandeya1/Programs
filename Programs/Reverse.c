#include <stdio.h>
int main()
{
    //this program will reverse the number  123    321
    //Pallindrome program    121==121     MADAM    MADAM   MALAYALAM   MALAYALAM

    //Reverse the number   123
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int rem, rev = 0;
    int temp=num;    //123
    int count=0;
    while(temp>0)
    {
        count++;
        rem=temp%10;     // rem=3 , temp=12,  rev=3    
        temp=temp/10;    // rem=2 , temp=1 , rev=32
        rev=rev*10+rem;  // rem=1,   temp=0,  rev= 321
    }

    printf("Reverse of %d is %d",num,rev);
    if(rev==num){
        printf("pallindrome\n");
    }
printf("Count %d",count);
    

    return 0;
}