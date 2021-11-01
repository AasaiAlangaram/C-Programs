// Working of relational operators
#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10;

    printf("%d == %d is %d \n", a, b, a == b); //1
    printf("%d == %d is %d \n", a, c, a == c); //0
    printf("%d > %d is %d \n", a, b, a > b); //0
    printf("%d > %d is %d \n", a, c, a > c); //0
    printf("%d < %d is %d \n", a, b, a < b);//0
    printf("%d < %d is %d \n", a, c, a < c);//1
    printf("%d != %d is %d \n", a, b, a != b);//0
    printf("%d != %d is %d \n", a, c, a != c);//1
    printf("%d >= %d is %d \n", a, b, a >= b);//1
    printf("%d >= %d is %d \n", a, c, a >= c);//0
    printf("%d <= %d is %d \n", a, b, a <= b);//1
    printf("%d <= %d is %d \n", a, c, a <= c);//1

    return 0;
}