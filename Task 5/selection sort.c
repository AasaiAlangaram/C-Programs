#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define MAX 100000
int n1(int array[],int n);
int n2(int array[],int n);
int n3(int array[],int n);
int n4(int array[],int n); 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int main() 
{
	int a,b,c,d,i,j,k,l;
	int h[MAX],t[MAX],tt[MAX],ll[MAX];
	double t1,t2,t3,t4,total;
	time_t prg_begin1,prg_end1,prg_begin2,prg_end2,prg_begin3,prg_end3,prg_begin4,prg_end4;


printf("Enter the size of the four array :");
scanf("%d%d%d%d",&a,&b,&c,&d);


    for(i=0;i<a;i++)
	{
		h[i]=rand()%a+1;
	}
    for(j=0;j<b;j++)
	{
		t[j]=rand()%b+1;
	}
	for(k=0;k<c;k++)
	{
		tt[k]=rand()%c+1;
	}
	for(l=0;l<d;l++)
	{
		ll[l]=rand()%d+1;
	}
	prg_begin1=clock();
	n1(h,a);
	prg_end1=clock();
	t1=(double)(prg_end1-prg_begin1)/(double)CLK_TCK;
	printf("\nTime taken to calculate sorting elapsed time of %d numbers: %f",a,t1);	

	prg_begin2=clock();
	n2(t,b);
	prg_end2=clock();	
	t2=(double)(prg_end2-prg_begin2)/(double)CLK_TCK;
	printf("\nTime taken to calculate sorting elapsed time of %d numbers:%f",b,t2);
	
	prg_begin3=clock();
	n3(tt,c);	
	prg_end3=clock();
	t3=(double)(prg_end3-prg_begin3)/(double)CLK_TCK;
	printf("\nTime taken to calculate sorting elapsed time of %d numbers: %f",c,t3);

	
	prg_begin4=clock();
	n4(ll,d);
	prg_end4=clock();
	t4=(double)(prg_end4-prg_begin4)/(double)CLK_TCK;
	printf("\nTime taken to calculate sorting elapsed time of %d numbers:%f",d,t4);	
	printf("\n");
	total=t1+t2+t3+t4;
	printf("\n");
	printf("The Total time taken %f + %f + %f + %f = %f seconds",t1,t2,t3,t4,total);
  return 0;
}

int n1(int array[],int n)
{
	int i,j;	

	printf("before sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}	printf("\n");
	printf("the swapped elements are:\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
			swap(&array[i],&array[j]);
			}
		}
		printf("%d\t",array[i]);
	}
	
	
}

int n2(int array[],int n)
{
int i,j;
	printf("\n");
	printf("before sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}	printf("\n");
	printf("the swapped elements are:\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
			swap(&array[i],&array[j]);
			}
     	}
		printf("%d\t",array[i]);
	}
}
int n3(int array[],int n)
{
int i,j;
	printf("\n");
	printf("before sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}	printf("\n");
	printf("the swapped elements are:\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				swap(&array[i],&array[j]);
			}
		}
		printf("%d\t",array[i]);
	}
}
int n4(int array[],int n)
{
int i,j;
	printf("\n");
	printf("before sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	printf("\n");
	printf("the swapped elements are:\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				swap(&array[i],&array[j]);
			}
			
		}
		printf("%d\t",array[i]);
	}
	
}

