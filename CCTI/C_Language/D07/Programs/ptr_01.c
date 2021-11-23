// pointers

#include <stdio.h>

int main()
{ 
    float a = 100.01;

    // pointer variable dec
    // ptr is a pointer variable pointing to int data type
    float *ptr = &a;

    printf("%.2f %p\n", a, &a);

    printf("%X %p %.2f", ptr, &ptr, *ptr);

    return 0;
}


