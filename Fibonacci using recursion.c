#include<stdio.h>
int fibonacci(int n);
void main()
{
	int n;
	for(n=0;n<10;n++)
	{
		printf("%d\n",fibonacci(n));
	}
	getch();
}
int fibonacci(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
	return fibonacci(n-1)+fibonacci(n-2);
    }
}

