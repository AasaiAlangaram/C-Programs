//  passing pointers to functions

#include <stdio.h>

void addition(int ptr);

int main()
{
    //int* p , i = 20;

    int i = 10;
    //p = &i;

    //printf("%d %d\n", *p, i); //20 20
    printf("%p %d\n",  &i, i); //20 20
    
    addition(i);

    //printf("%d %d", *p, i); //21 21
    printf(" %d\n",  i); //20 20

}

void addition(int ptr)
{
    printf("%p\n", &ptr);
    ptr++;
}

