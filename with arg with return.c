#include<stdio.h>
int add(int,int);
void main()
{
	int a,b;
		printf("Enter the values:");
	    scanf("%d%d",&a,&b);
	    printf("%d",add(a,b));
	    getch();
	}
	int add(x,y)
	{
		int c;
		c=x+y;
		return c;		
	}
