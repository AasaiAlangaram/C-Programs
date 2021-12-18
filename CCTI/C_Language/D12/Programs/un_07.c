#include <stdio.h>

union memory 
{
    unsigned char ADC_CON; //8 bits

    struct byte0
    {
        unsigned char b0:1; //1 bit
        unsigned char b1:1; //1 bit
        unsigned char b2:1; //1 bit
        unsigned char b3:1; //1 bit

        unsigned char b4:1; //1 bit
        unsigned char b5:1; //1 bit
        unsigned char b6:1; //1 bit
        unsigned char b7:1; //1 bit
    }stbyte0;

    struct byte1
    {
        unsigned char b0:1; //1 bit
        unsigned char b1:1; //1 bit
        unsigned char b2:1; //1 bit
        unsigned char b3:1; //1 bit

        unsigned char b4:1; //1 bit
        unsigned char b5:1; //1 bit
        unsigned char b6:1; //1 bit
        unsigned char b7:1; //1 bit
    }stbyte1;


    struct byte2
    {
        unsigned char b0:1; //1 bit
        unsigned char b1:1; //1 bit
        unsigned char b2:1; //1 bit
        unsigned char b3:1; //1 bit

        unsigned char b4:1; //1 bit
        unsigned char b5:1; //1 bit
        unsigned char b6:1; //1 bit
        unsigned char b7:1; //1 bit
    }stbyte2;

    struct byte3
    {
        unsigned char b0:1; //1 bit
        unsigned char b1:1; //1 bit
        unsigned char b2:1; //1 bit
        unsigned char b3:1; //1 bit

        unsigned char b4:1; //1 bit
        unsigned char b5:1; //1 bit
        unsigned char b6:1; //1 bit
        unsigned char b7:1; //1 bit
    }stbyte3;

}unvar;


int main()
{
    unvar.ADC_CON = 0xFF; 

    printf("%d %d", unvar.stbyte0.b0, unvar.stbyte0.b4);

    return 0;
}


