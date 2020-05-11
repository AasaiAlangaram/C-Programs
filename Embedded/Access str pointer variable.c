#include<stdio.h>

typedef struct
{
    int a;
    int *ptrmem;
}typestruct;

int main(void)
{
    int b = 22;
    typestruct firststrvar;
    
    firststrvar.a = 1;
    firststrvar.ptrmem = &b;
    
    printf("%d\n",firststrvar.a);
    printf("%d\n",*firststrvar.ptrmem);
    
    return 0;
}