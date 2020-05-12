#include<stdio.h>

void first(void)
{
    printf("Calling First Function\n");
}

void second(void)
{
    printf("Calling Second Function\n");
}

void add(int a, int b)
{
    int c;
    
    c = a+b;
    
    printf("%d\n",c);
}


void mul(int a, int b)
{
    int c;
    
    c = a*b;
    
    printf("%d\n",c);
}


int main(void)
{
    //*fun_ptr(int)” which is declaration of a function that returns void pointer.
    // Pointer to an two functions
    int (*func_ptr[2])(void) = {&first,&second};
    // Pointer to two functions with arguments
    int (*func_ptr_with_param[])(int,int) = {add,mul};
    
    (func_ptr[0])();
    (func_ptr[1])();
    
    (func_ptr_with_param[0])(1,2);
    (func_ptr_with_param[1])(2,2);
    
    return 0;
}
