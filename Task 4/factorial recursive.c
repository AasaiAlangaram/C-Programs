#include<stdio.h>
int fact(int n)
{
	int m;
	if(n==0)
	return 1;
	else
	{
	m=n*fact(n-1);
	return m;	
	}

}
int main()
{
	int n,result;
	printf("Enter the no:");
	scanf("%d",&n);
	result=fact(n);
	printf("The Factorial of %d is: %d",n,result);
	return 0;
}
