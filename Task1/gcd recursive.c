#include<stdio.h>

int mod(int a, int b);
int gcd(int a,int b);
int main()
{
	int a,b,c;
	printf("enter the two numbers:");
	scanf("%d%d",&a,&b);
	
	c=gcd(a,b);
	
	printf("GCD of two no is: %d",c);
	return 0;	
}
int mod(int a, int b)
{
	 int remainder;	
	remainder=a%b;
	
	
	return remainder;
}
int gcd(int a, int b)
{
	if (b==0)
	{
		return a;
	}
	if(a>b)
		return gcd(b,mod(a,b));
	else
		return gcd(a,mod(a,b));
}
