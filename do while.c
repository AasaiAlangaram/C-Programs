#include<stdio.h>
void main(void)
{
	int a,b,c;
	char x;
	
	do
	{
		printf("Enter the values:");
	    scanf("%d%d",&a,&b);
		c=a+b;
		printf("%d",c);
		printf("Enter char to continue:");
		x=getch();
	}while(x=='y');
	getch();	
}
