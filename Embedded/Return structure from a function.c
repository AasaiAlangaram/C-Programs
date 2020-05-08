#include<stdio.h>

typedef struct
{
    int a,b;
}mystruct;

mystruct structfunction(int* p)
{
    mystruct x;
    x.a = *p;
    x.b = *p+1;
    return x;
}

int main(void)
{
    int arr[2] = {1,2};
    mystruct mainstruct;
    int *ptr = arr;
    
    mainstruct = structfunction((int*)ptr);
    
    printf("%d\n",mainstruct.a);
    printf("%d\n",mainstruct.b);
    
    return 0;
}