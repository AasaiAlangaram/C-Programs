#include<stdio.h>

int main()
{
    int a = 10;

    printf("Address and value at a: %p -> %d\n", &a, a); //initial value

    printf("Address and value at a: %p -> %d\n", &a, ++a);

    printf("Address and value at a: %p -> %d", &a, a++);

    return 0;
}