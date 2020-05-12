#include<stdio.h>

void first(void)
{
    printf("Calling First Function\n");
}

void second(void)
{
    printf("Calling Second Function\n");
}


int main(void)
{
    //*fun_ptr(int)” which is declaration of a function that returns void pointer.
    // Pointer to an two functions
    int (*func_ptr[2])(void) = {&first,&second};
    
    (func_ptr[0])();
    (func_ptr[1])();
    
    return 0;
}
