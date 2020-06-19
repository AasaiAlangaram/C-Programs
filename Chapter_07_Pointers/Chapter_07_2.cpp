#include <stdio.h>

int main(void)
{
long num1 = 0L;
long num2 = 0L;
long *pnum = NULL;

pnum = &num1; 
*pnum = 2L; //num1 = 2
++num2; //num2 = 1
num2 += *pnum; //num2 = 3
pnum = &num2; 
++*pnum; //num2 = 4
printf("num1 = %ld num2 = %ld *pnum = %ld *pnum + num2 = %ld\n",
num1, num2, *pnum, *pnum + num2);//3,
return 0;
}
