#include<stdio.h>

#define rightShift 1
#define leftShift 2

/* Function to Shift the Given Values */
unsigned int shiftvalue(unsigned int getoriginal, unsigned int getshift, unsigned int getshiftside)
{
    unsigned int returnvalue;
    
    if(getshiftside == rightShift)
    {
        returnvalue = getoriginal >> getshift;
    }
    else
    {
        returnvalue = getoriginal << getshift;
    }
    
    return returnvalue;
    
}

int main(void)
{
    // Changable parameters
    unsigned int original = 376;
    unsigned int shift = 2;
    unsigned int shiftside = rightShift;
    // output value
    unsigned int outshiftedvalue;
    
    //get the shifted value 
    outshiftedvalue = shiftvalue(original,shift,shiftside);
    
    // Console print
    printf("%d\n",outshiftedvalue);
    printf("%d\n",original&0b00000011);
    
    return 0;
}