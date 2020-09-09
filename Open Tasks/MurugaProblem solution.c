#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

void vf_func(uint8 arr1[], uint8 arr2[]);

int main()
{
    void (*vd_fnptr[2])(uint8 arr1[], uint8 arr2[]) ={ &vf_func,&vf_func};
    
    uint8 u8_arr1[2] = {1,2};
    uint8 u8_arr2[2] = {3,4};
    uint8 u8_arr3[2] = {4,5};
    uint8 u8_arr4[2] = {7,6};
    uint8 l_ctr = 0;
    uint8 (*ptrarr[4])[2] = {&u8_arr1,&u8_arr2,&u8_arr3,&u8_arr4};

    for(uint8 l_lcfor=0;l_lcfor<3;l_lcfor=l_lcfor+2)
    {
        (vd_fnptr[l_ctr])((uint8 *)*(ptrarr+(l_lcfor+0)),(uint8 *)*(ptrarr+(l_lcfor+1)));   
        l_ctr++;
    }
    
    return 0;
}


void vf_func(uint8 arr1[], uint8 arr2[])
{
    printf("%d\n",arr1[0]);
    printf("%d\n",arr2[0]);
}