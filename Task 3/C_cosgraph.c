#include<stdio.h>
#include<math.h>
#define PI 3.1415

float cosine(float amp, float freq, float time, float phase)
{
	float result,p,cosine;
	p=2*PI*freq*time+phase;
	cosine=cos(p);
	result=amp*cosine;

	return result;
}

int space(int a)
{
	int i;
	for(i=0;i<=a;i++)
	{

		printf(" ");
	}
}

int main()
{
	int s,zero=0;
	float a,f,p,st,et,i;
	float cos_val;

	printf("enter the amplitude:");
	scanf("%f",&a);
	printf("enter the frequency:");
	scanf("%f",&f);
	printf("enter the phase:");
	scanf("%f",&p);
	printf("enter the start time:");
	scanf("%f",&st);
	printf("enter the end time:");
	scanf("%f",&et);
	printf(" =======================================================================================\n");
	printf("  time   cos(x) Value                                  cos(x) Graph\n");
	printf(" =======================================================================================\n");
	space(23);
	printf("-%.1f",a);
	space(25);
	printf("%d",zero);
	space(26);
	printf("%.1f\n",a);
	printf("                           ");
	printf("____________________________________________________________\n");

	for( i=st; i<=et+0.05; i+=0.05)
	{
		cos_val=cosine(a,f,i,p);
	
		if(cos_val>0.01)
		{
			printf(" ");
			printf("%.2f",i);
			printf("         ");
			printf(" %.2f",cos_val);
			space(33);
			printf("|");
			space(27*cos_val/a);
			printf("*");
		}
		else if(cos_val==-1.00)
		{
			printf(" ");
			printf("%.2f",i);
			printf("         ");
			printf("%.2f",cos_val);
			space(33);
			printf("|");
		}
			
		else if(cos_val<-0.01)
		{
			printf(" ");
			printf("%.2f",i);
			printf("         ");
			printf("%.2f",cos_val);
			space(32+26*cos_val/a);
			printf("*");
			space(-26*cos_val/a);
			printf("|");
			
		}
		else if(cos_val=0)
		{
			printf(" ");
			printf("%.2f",i);
			printf("         ");
			printf(" %.2f",cos_val);
			space(30);
			printf("*");
		}
		else
		{
			printf(" ");
			printf("%.2f",i);
			printf("         ");
			printf(" %.2f",cos_val);
			space(33);
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
	
}
