#include<stdio.h>

typedef unsigned char tU08;				/**< 8bit unsigned type define */
typedef unsigned short int tU16;		/**< 16bit unsigned type define */
typedef unsigned int tU24;				/**< 24bit unsigned type define */
typedef unsigned long int tU32;	 		/**< 32bit unsigend type define */

typedef struct
{
    tU08 a;
    tU08 b;
    tU08 c;
}data;

// Declaring array for structure pointer
data* samedataarray[3];
// Declaring array for structure
data godata[3];

/* Function 
@param : godata[]
*/
void getdata(const data samedata[])
{
    // To avoid warning we need to typecasrt here. It is recommended method
    samedataarray[0] = (data*)(&samedata[0]);
    
    printf("In Function getdata overwritten :%d\n",samedata[0].a);
    printf("In Function getdata overwritten :%d\n",samedata[0].b);
    printf("In Function getdata overwritten :%d\n",samedata[0].c);
}

/* main function */
int main(void)
{
    // Defined structure member values
    godata[0].a = 1;
    godata[0].b = 2;
    godata[0].c = 3;
    
    printf("In Function Main :%d\n",godata[0].a);
    printf("In Function Main :%d\n",godata[0].b);
    printf("In Function Main :%d\n",godata[0].c);
    
    // Passing Structure array 
    // you have to send with poiter typecasted to calling Function
    getdata((data *)&godata);
    
    return 0;
}
