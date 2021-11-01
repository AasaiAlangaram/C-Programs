#include <stdio.h>

int main()
{
    int a;
    float b;
    char d;

    printf("Size of int=%lu bytes\n",sizeof(a));
    printf("Size of float=%lu bytes\n",sizeof(b));
    printf("Size of char=%lu byte\n",sizeof(d));

    return 0;
}