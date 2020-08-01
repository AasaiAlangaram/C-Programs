#include<stdio.h>

/************************
typedef int myinteger;
typedef char *mystring;
typedef void (*myfunc)();

myinteger i;   // is equivalent to    int i;
mystring s;    // is the same as      char *s;
myfunc f;      // compile equally as  void (*f)();
**************************/

typedef void function_not_return_anything;
typedef int (*funcptr)(int,int);

int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int div(int a, int b)
{
	return a/b;
}

int product(int u, int v) {
  return u*v;
}

function_not_return_anything function(int a)
{
	printf("%d",a);
}

int main(void)
{
	int ret;
	funcptr fptrvar = &product;
	
	int (*intfptr[3])(int, int) = {&add, &sub, &div};
	
	for(int i = 0;i<3;i++)
	{
		ret = (intfptr[i])(10,2);
		printf("%d\n",ret);
	}
	
	int a = 5;
	int x2 = (*fptrvar)(123, 456); // call product() to calculate 123*456
	
	function(a);
	
	return 0;
}
