#include<stdio.h>
int factorial(int n);
void main()
{
	int n;
	printf("Enter the value:");
	scanf("%d", &n);
	printf("%d", factorial(n));
	getch();
}
int factorial(int n)
{
	if(n<=1)
	return 1;
	else
	return n*factorial(n-1);	
}


