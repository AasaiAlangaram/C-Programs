#include<stdio.h>

typedef float (*pt2func)(float,float);

float multiplyfunc(float a, float b);

int main(void)
{
    float result;
    
    pt2func myfuncptr = &multiplyfunc;
    
    result = (*myfuncptr)(2.3,5.1);
    
    printf("%0.2f",result);
    
    return 0;
    
}

float multiplyfunc(float a, float b)
{
    float c = a*b;
    
    return c;
}