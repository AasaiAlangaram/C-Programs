#include <stdio.h>

int main()
{
    int x[5] = {11,2,3,4,5};
    int i;
    int sum = 0;

    int *ptr;

    ptr = &x[0];


    for( i = 0; i<5; i++)
    {
        sum = sum + *(ptr+i);
    }

    printf("sum %d", sum);

    return 0;
}