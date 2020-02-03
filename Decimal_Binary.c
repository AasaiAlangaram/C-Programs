#include<stdio.h>
void conversion(int a);
void main()
{
	int a;
	printf("Enter Decimal value:");
	scanf("%d",&a);
	conversion(a);
	getch();
}
void conversion(int a)
{
	int b,q;
	do
	{
		b=a%2;
		printf("%d",b);
		q=a/2;
		a=q;	
	}
	while(q!=0);
}

