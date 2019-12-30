#include<stdio.h>
struct time
{
	int hour;
	int min;
	int sec;
};
struct time1
{
	int hour;
	int min;
	int sec;
}t1;
struct time2
{
	int hour;
	int min;
	int sec;
}t2;
void increment(struct time t,int s);
void Print(struct time t);
int compare(struct time1 t1,struct time2 t2);
int main()
{
	int s,diff,h,m,m1;
	struct time t;
	printf("Enter the hour, minute & second to print:\n");
	scanf("%d%d%d",&t.hour,&t.min,&t.sec);
	if(t.hour>23|t.min>59|t.sec>59)
	{
	printf("Enter valid time");
	return 0;
    }
	else
	Print(t);
	printf("Input a second to increment a time:\n");
	scanf("%d",&s);
	increment(t,s);
	printf("Enter Time1:\n");
	scanf("%d%d%d",&t1.hour,&t1.min,&t1.sec);
	printf("Enter Time2:\n");
	scanf("%d%d%d",&t2.hour,&t2.min,&t2.sec);
	diff=compare(t1,t2);
	diff=diff%86400;
	printf("The difference between two time:%d seconds\n",diff);
	h=diff/3600;
	m=diff%3600;
	m1=m/60;
	s=m%60;
	printf("The difference time: %d hour:%d min:%d sec",h,m1,s);

	return 0;
}
void Print(struct time t)
{
	printf("HH:MM:SS\n");
	printf("%d:%d:%d\n",t.hour,t.min,t.sec);
}
void increment(struct time t,int s)
{
int a,b,c,d,e,f;
a=t.sec+s;
c=a/60;
b=a%60;
t.sec=b;
if(a>59)
{
	t.min=t.min+c;
if(t.min>59)
{
	d=t.min/60;
	e=t.min%60;
	t.hour+=d;
	t.min=e;
if(t.hour>23)
{
	f=t.hour%24;
	t.hour=f;
}
}
}
	printf("HH:MM:SS\n");
	printf("%d:%d:%d\n",t.hour,t.min,t.sec);
}
int compare(struct time1 t1,struct time2 t2)
{
	int hour1,min1,sec1,ti1,t,ti2;
	hour1=23-t1.hour;
	min1=59-t1.min;
	sec1=60-t1.sec;
	ti1=((hour1*3600)+(min1*60)+sec1);
	ti2=((t2.hour*3600)+(t2.min*60)+t2.sec);
	
	t=ti1+ti2;
	return t;
}

