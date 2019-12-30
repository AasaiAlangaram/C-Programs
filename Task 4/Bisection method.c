#include<stdio.h>
double f1(double A, double B, double C, double xl) 
{ 
return ((A*xl*xl) + (B*xl)+ C);
}
double f2(double A, double B, double C, double xr) 
{ 
double a;
a=((A*xr*xr) + (B*xr)+ C);
return a;
}
double f3(double A, double B, double C, double X_mid) 
{ 
return ((A*X_mid*X_mid) + (B*X_mid)+ C);
}
double bi( double a,double b,double c,double xl,double xr)
{
	double X_left,X_right,X,m,X_mi,i,j,k,o,n;
	X_left=f1(a,b,c,xl);

	X_right=f2(a,b,c,xr);

	X_mi=((xl+xr)/2);

	X=f3(a,b,c,X_mi);


	m=xr-xl;

	if(m<0.00005)
	return X_mi;
	if(X_mi<0)
	printf("%lf\t|%lf\t|%lf\t|%lf\t|%lf\t|%lf\t|%lf\n",xl,xr,X_left,X_right,X_mi,X,m);
	if(X_mi>0)
	printf("%lf\t|%lf\t|%lf\t|%lf\t|%lf\t|%lf\t|%lf\n",xl,xr,X_left,X_right,X_mi,X,m);
	
	i=f1(a,b,c,xl);
	j=f2(a,b,c,xr);
	k=f3(a,b,c,X_mi);
	o=i*k;
	n=j*k;
	if(o<0)
	return bi(a,b,c,xl,X_mi);
	else if(n<0)
	return bi(a,b,c,X_mi,xr);
	else
	{ 
	printf("There is no root"); 
	return ( 0.0 );
	}
}
int main()
{
	double a,b,c,xl,xr,bisec,X;
	printf("Enter the value of a:");
	scanf("%lf",&a);
	printf("Enter the value of b:");
	scanf("%lf",&b);
	printf("Enter the value of c:");
	scanf("%lf",&c);
	printf("Enter the values of X_left & X_right:\n");
	scanf("%lf%lf",&xl,&xr);
	printf("xl\t\t|xr\t\t|f1\t\t|f2\t\t|X_m\t\t|X\t\t|xr-xl\n");
	bisec=bi(a,b,c,xl,xr);
	printf("The root is:%f",bisec);
	return 0;
}
