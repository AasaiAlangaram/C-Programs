#include <stdio.h>

int main()
{

    int n = 4;

    int j = 5;

    int * ptr1,  *ptr2;

    ptr1 = &n;
    ptr2 = &j;
    printf("%p ", &n);
    printf("%p", ptr1 - 1);

    //printf("%d", *ptr1+ *ptr2);

    return 0;

}
