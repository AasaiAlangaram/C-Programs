#include<stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {0};
    static int posno, negno, neuno;
    int i,j;

    printf("enter the array elements:");
    for(i = 0; i<5; i++)
    scanf("%d",&arr[i]);

    
    for(j = 0; j<5; j++)
    {
        //find total number of positive numbers
        if(arr[j] > 0)
        {
            posno++;
        }
        if(arr[j] == 0)
        {
            neuno++;
        }
        if(arr[j] < 0)
        {
            negno++;
        }

    }
    printf("%d %d %d\n",posno,neuno, negno);
    printf("%0.1f %f %f",posno/5.0,neuno/5.0, negno/5.0);
    exit(EXIT_SUCCESS);
}

    