#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		printf(" ");
		for(k=5;k>=i;k--)
		printf("*");
		printf("\n");
	}
	getch();
}
