#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c=0,i=8;
	printf("%d\n%d\n",a,b);
	while(i>=1)
	{
		c=a+b;
		printf("%d\n",c);
		i--;
		a=b;
		b=c;
	}
	getch();
	}
		
