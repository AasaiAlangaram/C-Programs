#include<stdio.h>


int main()
{
	
	unsigned long startno, ans;
	unsigned long number;
	unsigned int terms;
	unsigned int saveterms;

	for(startno=2; startno < 1000000; startno++)
	{
		
		terms = 0;
		number = startno;
		
		while(number>1)
		{
			while(number%2==0)
			{
				number = number/2;
				terms += 1; 
			}
			if(number>1)
			{
				number = 3*number+1;
				terms += 1; 
			}
		}
		
		if(terms > saveterms)
		{
			saveterms = terms;
			ans = startno;
		}
	}
	
	printf("%d   %d",ans,saveterms);
	
	return 0;
}
