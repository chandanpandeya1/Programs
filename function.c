#include <stdio.h>
#include <stdbool.h>

//function --
//It will only tell whether the number is prime or not.
//HCF highest common factor (9) 11,9
//LCM Least Common Muliple (15,5)  LCM=15  ,HCF=5   || (7,5) LCM=35  HCF=1 
// ||(10,25)  LCM=50 HCF=5
//   HCF*LCM=n1*n2;

//      
int HCF(int a,int b){      //Recursive function call    (a=12,b=16)
    if(a%b==0){            //   a%b=12    b=16,12      (a=16,b=12)
        return b;          //   a%b=4     b=12 ,4      (a=12,b=4)
    }                      //   a%b=0     b=4
    else{
        return HCF(b,a%b);   //algorithms
    }
}
//   2,3,4,5   60
bool isPrime(int num);
int main()
{
    int start, end;
    printf("Enter the first number : ");
    scanf("%d", &start);

    printf("Enter the second number : ");
    scanf("%d", &end);

    int hcf=HCF(start,end);
    printf("HCF of two number is : %d\n",hcf);

    int lcm=start*end/hcf;
    printf("LCM of two number is : %d",lcm);
    // for (int i = start; i <= end; i++)
    // {
    //     bool result = isPrime(i);
    //     if(result==true){
    //         printf("%d : Prime Number\n",i);

    //     }
    // }

    return 0;
}

bool isPrime(int num) //  17    (1-8)
{                     //7
    if (num < 2)
        return false;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
