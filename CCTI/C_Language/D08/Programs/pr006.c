#include <stdio.h>

void swap(int *i, int *j)
{
    int temp;

    temp = *j;
    *j = *i;
    *i = temp;
}

int main()
{

    int i = 20, j = 40;

    printf("before swap %d %d\n", i,j);

    swap(&i, &j);

    printf("after swap %d %d", i,j);
    
    return 0;
}