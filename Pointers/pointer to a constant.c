#include <stdio.h>

typedef unsigned char tU08;		 /* unsigned int 8Bits definition */
typedef unsigned short 	tU16;	 /* unsigned int 16Bits definition */
typedef unsigned int tU32;		 /* unsigned int 32Bits definition */
typedef signed char 	tS08;	 /* signed int 8Bits definition */
typedef signed short	tS16;	 /* signed int 16Bits definition */
typedef signed int		tS32;	 /* signed int 32Bits definition */


typedef struct{
	tU16 a;
	tU08 b;
	tU08 v;
	tU08 d;
	tU08 e;
}stCan_t;

// indicate that the value pointed to must not be changed.
static const stCan_t* getCan;

int main(void)
{
	static stCan_t Can = { 0 };
	
	Can.a = 10;
	Can.b = 20;

	
	getCan = &Can;
	
	// [Error] assignment of member 'stCan_t::a' in read-only object
	// getCan->a = 2;
	
	printf("a value: %d\n",getCan->a);
	printf("b value: %d\n",getCan->b);
	
	return 0;	
}