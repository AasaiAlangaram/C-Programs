#include "include.h"

uint8_t crc8bit_cal(uint8_t *buf,uint8_t len);

int main(void)
{
	uint8_t crc;
	uint8_t arr[3] = {1,2,3};
	uint8_t leng = sizeof(arr)/sizeof(arr[0]);
	//printf("length of array:%d",leng);
	crc = crc8bit_cal(arr,leng);
	printf("CRC Checksum Result :%x",crc);
	return 0;
}

uint8_t crc8bit_cal(uint8_t *buf,uint8_t len)
{
	static uint8_t crc_result = 0;
	while(len!=0)
	{
		crc_result ^= *buf;
		for(uint8_t i = 0; i < 8; i++)
		{
			if((crc_result & 0X80) != 0)
			{	
				crc_result = ((crc_result << 1) ^ 0X1D);
			}
			else
			{
				crc_result <<= 1;
			}
		}
		buf++;
		len--;
	}
	crc_result &= 0XFF;
	crc_result ^= 0XFF;
	
	return crc_result;
}
