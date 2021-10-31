#include<stdio.h>

int main()
{
	int number = 14;
	
	int *p;
	
	printf("number's address: %p\n",&number);
	printf("number's value: %d\n",number);
	
	p = &number;
	
	printf("pnumber's address: %p\n",&p);
	printf("pnumber's size: %zd\n",sizeof(p));
	printf("value pointed to : %d\n",*p);
	printf("pnumber's value: %p\n",p);
	
	return 0;
}
