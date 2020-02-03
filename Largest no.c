#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	printf("%d is the largest number",a);
	if(b>a && b>c)
	printf("%d is the largest number",b);
	if(c>a && c>b)
	printf("%d is the largest number",c);
	getch();
	
}
