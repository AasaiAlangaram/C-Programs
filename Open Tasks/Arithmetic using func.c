#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int rem_div(int,int);
void main()
{
	int a,b;
	char A,B,C,D,E,x;
    printf("Enter the values:");
	scanf("%d%d",&a,&b);
	printf("select key:");
	x=getch();
	if(x=='A')
	{
	    printf("%d",add(a,b));	
	}
	else if(x=='B')
	{
	    printf("%d",sub(a,b));	
	}
	else if(x=='C')
	{
		printf("%d",mul(a,b));
	}
	else if(x=='D')
	{
		printf("%d",div(a,b));
	}
	else if(x=='E')
	{
		printf("%d",rem_div(a,b));
	}
	else
	{
		printf("Invalid Key");
	}
	getch();
}
int add(x,y)
{
	int c;
	c=x+y;
	return c;
}
int sub(x,y)
{
	int c;
	c=x-y;
	return c;
}
int mul(x,y)
{
	int c;
	c=x*y;
	return c;
}
int div(x,y)
{
	int c;
	c=x/y;
	return c;
}
int rem_div(x,y)
{
	int c;
	c=x%y;
	return c;
}









