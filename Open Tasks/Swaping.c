#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter values for a & b:");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping:%d%d", a,b);
	getch();	
}
