#include <stdio.h>
//   6,3,4,2,1,7,9,8   ascending and descending order

int main()
{

    //selection sort
    int num[] = {6, 3, 4, 2, 1, 7, 9, 8};
    int count=0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)      //   n   =   n*(n-1)/2
        {
            // }
            
            // for(int k=0;k<8;k++){
            //     printf("%d ",num[k]);
                
            // }
            // printf("\n");
            if (num[i] > num[j])
            {
                int temp = num[i]; // Replacement
                num[i] = num[j];
                num[j] = temp;
            }
            count++;
           
        }
        
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    printf("%d",count);
    return 0;
}
