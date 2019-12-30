#include<stdio.h>
#include<math.h>
float cosine(float phase,float frequency,float time,float amplitude);
int main()
{
	float phase,m,frequency,b,time,amplitude,pro,sum,a,result,q;
	double sin;
	
	printf("\n Enter The Amplitude :  ");
	scanf("%f",&amplitude);	
	
	printf("\n Enter The Frequency : ");
	scanf("%f",&frequency);
	
	printf("\n Enter The Time : ");
	scanf("%f",&time);
	
	printf("\n Enter The Phase Value :");
	scanf("%f",&phase);
	
	result=cosine(phase,frequency,time,amplitude);
	
	sin=1/result;
	printf("\n\nThe sine value is: %f",sin);
	
	q=amplitude*result;
	printf("\n\nThevalue of A.cos(2*pi*f*t+O): %f",q);
	
	return 0;
	}
	
	
	float cosine(float phase,float frequency,float time,float amplitude)
	{
	float pi=3.14,rad=0.0174,b,product,sum,a;	
	
	product=2*pi*time*frequency;
	sum=product+phase;
	a=sum*rad;
	b=cos(a);


	return b;
	}

