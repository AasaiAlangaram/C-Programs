#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,fact=1;
	printf("enter the no:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("Factorial=%d",fact);
	getch();
	
}
