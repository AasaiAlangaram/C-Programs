#include<stdio.h>


typedef unsigned char tU08;		 /* unsigned int 8Bits definition */
typedef unsigned short 	tU16;	 /* unsigned int 16Bits definition */
typedef unsigned int tU32;		 /* unsigned int 32Bits definition */


typedef struct{
	tU08 (*DtcList)[1][5];
}stDtcMgtToStartup_t;

static const stDtcMgtToStartup_t* getDtcMgtToStartup;

stDtcMgtToStartup_t* stptfDtcMgtToStartupInf(void)
{
    static tU08 ucaDTCList[1][5] ={15,10,12,33,44};
	static stDtcMgtToStartup_t DtcMgtToStartup;
	
	DtcMgtToStartup.DtcList = &ucaDTCList;

	return &DtcMgtToStartup;
}


int main()
{
    getDtcMgtToStartup = stptfDtcMgtToStartupInf();
    
	//static tU16 tmpFaultNum =(tU16)(*getDtcMgtToStartup->DtcList)[0][1];
	
	printf("%d\n",(*getDtcMgtToStartup->DtcList)[0][0]);
	printf("%d\n",(*getDtcMgtToStartup->DtcList)[0][1]);
	printf("%d\n",(*getDtcMgtToStartup->DtcList)[0][2]);
	printf("%d\n",(*getDtcMgtToStartup->DtcList)[0][3]);
	printf("%d\n",(*getDtcMgtToStartup->DtcList)[0][4]);
	
	return 0;
}
