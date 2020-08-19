#include <stdio.h>
#include<stdlib.h>

//fptr is a constant pointer to a function that takes a void argument and return nothing
typedef void (*const voidfptr)(void);
typedef void (*vfptrwarg)(int a, int b);
//pointer to a function that take two integer arguments that inturn returning pointer of int type
typedef int *(*vrfptr)(int *a, int *b);

void print(void);
void print_again(void);
void execute(voidfptr f);
void printsum(vfptrwarg f);
void sum(int a, int b);
int *big_no(int *a, int *b);

int main(void)
{
	int a=5, b=6;
	int *result = NULL;
	vrfptr var = big_no;
	result = (int *)var(&a,&b);
	printf("Biggest no is %d\n", *result);
	
	vfptrwarg v = sum;
	printsum(v);
    execute(print); // sends address of print
    execute(print_again);
    return 0;
}

void print(void)
{
    printf("const!\n");
}

void print_again(void)
{
	printf("I am coming again\n");
}

void execute(voidfptr f) // receive address of print
{
    f();
}

void printsum(vfptrwarg f)
{
	//f(rand(),rand());
	f(2,4);
}

void sum(int a, int b)
{
	printf("sum of 2 numbers : %d\n", a+b);
}

int *big_no(int *a, int *b)
{
	
	return (*a>*b?a:b);
}
