#include<stdio.h>
void main()
{
	int a,b,c,ln;
	printf("Enter 3 numbers:");
	scanf("%i%i%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			ln=a;
		}
       else
       {
	     ln=c;

       }
    }
else
{
	if(b>c)
	{
		ln=b;
	}
	else
	{
		ln=c;
	}
}
printf("largest value is:%d", ln);
getch();
}

