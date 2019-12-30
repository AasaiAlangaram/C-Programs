#include<stdio.h>
#define PI 3.14
struct rectangle
{
	double l,w,h;
}r;
struct sphere
{
	double r;
}sp;
struct ellipse
{
	double a,b;
}e;
struct pipe
{
	double l,b,h;
}rp;
double surface(struct rectangle r); 
double surface2(struct ellipse e);
double surface1(struct pipe rp);
double surface3(struct  sphere sp); 

int main()
{
	int n;
	printf("Enter the which surface u want to calculate:\n");
	printf("1.rectangle\n2.rectangular pipe\n3.ellipse\n4.sphere\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Enter length,width & height of a rectangle:\n");
			scanf("%lf%lf%lf",&r.l,&r.w,&r.h);
			surface(r);
			break;
		case 2:
			printf("Enter length,breath & height of a rectangle:\n");
			scanf("%lf%lf%lf",&rp.l,&rp.b,&rp.h);
			surface1(rp);
			break;
		case 3:
			printf("Enter Major and Minor axis:\n");
			scanf("%lf%lf",&e.a,&e.b);
			surface2(e);
			break;
		case 4:
			printf("Enter the Radius of a sphere:\n");
			scanf("%lf",&sp.r);
			surface3(sp);
			break;
		default:
			printf("Enter a valid number\a");
			
	}
}
double surface(struct rectangle r)
{
	double j;
	j=(2*r.l*r.w)+(2*r.l*r.h)+(2*r.w*r.h);
	printf("Surface Area of a rectangle:%lf\n",j);	
}
double surface2(struct ellipse e)
{
	double k;
	k=PI*e.a*e.b;
	printf("Surface Area of a ellipse:%lf\n",k);
}
double surface1(struct pipe rp)
{
	double l;
	l=2*(rp.b*rp.l+rp.l*rp.h+rp.h*rp.b);
	printf("Surface Area of a pipe:%lf\n",l);
}
double surface3(struct sphere sp)
{
	double m;
	m=4*PI*sp.r*sp.r;
	printf("Surface Area of a sphere:%lf\n",m);
}




