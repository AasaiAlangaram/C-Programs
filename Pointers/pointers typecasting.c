/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h> 

void bleh1(int *);
void bleh (char *); 

int main(){
    char c = '5'; 

    char *d = &c;
    
    printf("Decimal Value of char 5 : %d\n",c);
    
    printf("Address of c : %p\n",&c);
    printf("Value pointer d pointing is : %p\n",d);
    
    bleh((char *)d);
    
    bleh1((int *)d);
    return 0;  
}

void bleh(char *n)
{
    printf("Value int pointer n pointing is : %p\n",n);
    printf("%d \n", *n); 
}

void bleh1(int *o)
{
    printf("Value int pointer n pointing is : %p\n",o);
    
    char *c = o;
    printf("%d \n", *(c+0)); 
    printf("%d \n", *(c+1)); 
    printf("%d \n", *(c+2)); 
    printf("%d \n", *(c+3)); 
}


