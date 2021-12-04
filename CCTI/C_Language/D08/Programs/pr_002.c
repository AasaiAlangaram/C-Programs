// Pointers to array

#include <stdio.h>

int main()
{
    int x[5] = {11,2,3,4,5};

    int *ptr;

    ptr = &x[0];

    printf("*ptr = %d\n", *ptr);

    printf("address : %X %X\n", ptr , ptr+1);

    printf("*ptr = %d\n", *(ptr + 4));

    return 0;
    
}
