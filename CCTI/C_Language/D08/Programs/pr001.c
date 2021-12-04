// pointers

#include <stdio.h>

int main()
{ 
    int a = 100;

    // pointer variable dec
    // ptr is a pointer variable pointing to int data type
    int *ptr = &a;

    printf("%d %p\n", a, &a);

    printf("%X %p %d\n", ptr, &ptr, *ptr);

    printf("size of pointer : %llu", sizeof(ptr));

    return 0;
}