#include<stdio.h>

typedef unsigned char uint8;		 /* unsigned int 8Bits definition */
typedef unsigned short 	uint16;	 /* unsigned int 16Bits definition */
typedef unsigned int uint32;		 /* unsigned int 32Bits definition */
typedef signed char 	tS08;	 /* signed int 8Bits definition */
typedef signed short	tS16;	 /* signed int 16Bits definition */
typedef signed int		tS32;	 /* signed int 32Bits definition */

void change_var_data(int *ptr)
{
	*ptr = 5;
}

int main(void)
{
	int a=1;
	int arr[1]={1};
	
	change_var_data(&a);
	change_var_data(arr);
	
	printf("%d \n",a);
	printf("%d \n",arr[0]);
	
	return 0;
	
}
