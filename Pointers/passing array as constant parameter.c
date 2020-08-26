#include<stdio.h>

void print_Array(const unsigned int *a);

int main(void)
{
    unsigned int arr[5] = {1,2,3,4,5};
    print_Array((const unsigned int* )&arr);
    return 0;
}

void print_Array(const unsigned int *a)
{
    for(unsigned int i =0 ;i<5;i++)
    {
        printf("%d",a[i]);
    }
    
}