
#include<stdio.h>

typedef unsigned char tU08;		 /* unsigned int 8Bits definition */
typedef unsigned short 	tU16;	 /* unsigned int 16Bits definition */
typedef unsigned int tU32;		 /* unsigned int 32Bits definition */


typedef struct{
	tU08 ucBatNtcCtrlInfo;
}stPwrToNtc_t;


typedef union 
{
    stPwrToNtc_t stvar;
    tU08 unionmem;
    
}unionname;

int main()
{
    unionname unionvar;
    
    unionvar.unionmem = 4;
    
    printf("ucBatNtcCtrlInfo:%d\n",unionvar.stvar.ucBatNtcCtrlInfo);
    printf("Hello");
    
    return 0;
}