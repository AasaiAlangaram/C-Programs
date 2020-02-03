#include<stdio.h>
void main()
{
	int a,b,c;
	char x;
	
	do
	{
		printf("Enter the values:");
	    scanf("%d%d",&a,&b);
		c=a+b;
		printf("%d",c);
		x=getch();
	}
	while(x=='y');
	getch();	
}
