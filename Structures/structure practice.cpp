#include<stdio.h>

typedef struct
{
	int (*arr)[2];
	int narr[2];
}mystruct;

mystruct stnvar = {0};
mystruct *stptvar = &stnvar;

int main()
{	
	int a[2] = {1,2};
	stptvar->arr = &a;
	*(stptvar->arr)[0] = 2;
	stptvar->narr[0] = 1;
	printf("%d\n",stptvar->narr[0]);
	printf("%d",*(stptvar->arr)[0]);
	
	return 0;
}
