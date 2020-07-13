#include <stdio.h>

/*SL typedef*/
typedef unsigned char tU08;		 /* unsigned int 8Bits definition */
typedef unsigned short 	tU16;	 /* unsigned int 16Bits definition */
typedef unsigned int tU32;		 /* unsigned int 32Bits definition */
typedef signed char 	tS08;	 /* signed int 8Bits definition */
typedef signed short	tS16;	 /* signed int 16Bits definition */
typedef signed int		tS32;	 /* signed int 32Bits definition */


typedef struct
{
	int (*arr)[2];
	int (*pttoarrofint)[1];
	int *ptr;
	
}arrst;



int main()
{
	arrst ptstvar;
	
	int a[1] = {1};
	int b[2] = {1,2};
	int c = 3;
	
	ptstvar.pttoarrofint = &a;
	ptstvar.arr = &b;
	ptstvar.ptr = &c;
	
	(*ptstvar.pttoarrofint)[0] = 5;
	
	(*ptstvar.arr)[0] = 10;
	(*ptstvar.arr)[1] = 20;
	
	printf("hello ");
	printf("(*pttoarrofint)[0] :%d\n",(*ptstvar.pttoarrofint)[0]);
	
	printf("(*ptstvar->arr)[0] :%d\n",(*ptstvar.arr)[0]);
	printf("(*ptstvar->arr)[1] :%d\n",(*ptstvar.arr)[1]);
	
	return 0;
}
