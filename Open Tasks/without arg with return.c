#include<stdio.h>
int add();
void main()
{
	int c;
	c=add();
	printf("%d",c);
	getch();
	}
	int add()
	{
		int a,b;
		printf("Enter the values:");
	    scanf("%d%d",&a,&b);
		return a+b;
	}
	
