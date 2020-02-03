#include <stdio.h>
int conversion(int n);
void main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("%d is binary value", conversion(n));
    getch();
}
int conversion(int n)
{
    int binary_num;
    int remainder,i=1;
    while (n!=0)
    {
        remainder=n%2;
        n=n/2;
        binary_num=binary_num+remainder*i;
        i=i*10;
    }
    return binary_num;
}
