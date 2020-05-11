#include<stdio.h>

typedef unsigned char tU08;				/**< 8bit unsigned type define */
typedef unsigned short int tU16;		/**< 16bit unsigned type define */
typedef unsigned int tU24;				/**< 24bit unsigned type define */
typedef unsigned long int tU32;	 		/**< 32bit unsigend type define */

#if 0
typedef unsigned char tU08;				/**< 8bit unsigned type define */
typedef unsigned short int tU16;		/**< 16bit unsigned type define */
typedef unsigned int tU24;				/**< 24bit unsigned type define */
typedef unsigned long int tU32;	 		/**< 32bit unsigend type define */

int main()
{
    tU16 wRdCmd = 0;
    
    wRdCmd = (tU16)((1 << 8U) | (17 << 9U));
    
    printf("%d", wRdCmd);
    
    return 0;
}

#endif

void SpiPollingTask(const tU08 TxData[], tU08 byDataLen, tU08 byChipSel)
{
    int i;
    tU16 result = 0;
    
    for(i = 0; i<byDataLen; i++)
    {
        printf("%d\n", TxData[i]);
        result = TxData[i] << (i*8);
    }
    
    printf("result : %d\n", result);
}

int main()
{
    tU16 wTxdata = 8960;
    tU08 byDataLen = 2;
    tU08 cs = 1;
    
    SpiPollingTask((tU08 *)&wTxdata, (tU08)byDataLen, cs);
    
    return 0;
}