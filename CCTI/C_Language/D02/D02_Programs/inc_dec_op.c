// Working of increment and decrement operators
#include <stdio.h>
int main()
{
    int a = 10, b = 100;

    float c = 10.5, d = 100.5;

    printf("++a = %d \n", ++a); //11

    printf("a++ = %d \n", a++); //11 - 12

    printf("++a = %d \n", ++a); // 13

    printf("++a = %d \n", ++a + a++);

    printf("--b = %d \n", --b); //99
    printf("++c = %f \n", ++c); //11.5
    printf("--d = %f \n", --d); //99.5

    return 0;
}