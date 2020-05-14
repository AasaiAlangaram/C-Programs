#include<stdio.h>

typedef struct 
{
    int stmem[3];
}mystruct;

typedef union 
{
    int unmem[3];
    mystruct stvar;
}myunion;

int main()
{
    myunion unvar;
    
    unvar.stvar.stmem[0] = 5;
    
    printf("%d\n",unvar.unmem[0]);
    printf("%p\n",&unvar);
    printf("%p\n",&unvar.stvar);
    
    return 0;
}
