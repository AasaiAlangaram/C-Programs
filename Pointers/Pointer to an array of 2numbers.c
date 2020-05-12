#include<stdio.h>

void getarray(int a[], int (*p)[])
{
    printf("%d %d\n",a[0],*(*p));
    printf("%d %d\n",a[1],*(*p+1));
}

void changearray(int a[])
{
    a[0] = 100;
    a[1] = 200;
}


int main(void)
{
    int a[2] = {6,5};
    // Pointer to an array of two numbers 
    int (*p)[2] = &a;
    
    getarray(a, p);
    
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    
    changearray(a);
    
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    
    return 0;
}
