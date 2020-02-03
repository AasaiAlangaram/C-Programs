#include<stdio.h>
void add();
void main()
{
	add();
		getch();	
}
void add()
{
        int a,b,c;
		printf("Enter the values:");
	    scanf("%d%d",&a,&b);
		c=a+b;
		printf("%d",c);
}
