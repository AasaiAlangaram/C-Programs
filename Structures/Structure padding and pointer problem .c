/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#define first 0
#define second 1

#if first
//Added Site Link For reference
//https://www.geeksforgeeks.org/structure-member-alignment-padding-and-data-packing/
#include <stdio.h> 
  
// Alignment requirements 
// (typical 32 bit machine) 
  
// char         1 byte 
// short int    2 bytes 
// int          4 bytes 
// double       8 bytes 
  
// structure A 
typedef struct structa_tag 
{ 
   char        c; 
   short int   s; 
} structa_t; 

// structure B 
typedef struct structb_tag 
{ 
   short int   s; 
   char        c; 
   int         i; 
} structb_t; 
  
// structure C 
typedef struct structc_tag 
{ 
   char        c; 
   double      d; 
   int         s; 
} structc_t; 
  
// structure D 
typedef struct structd_tag 
{ 
   double      d; 
   int         s; 
   char        c; 
} structd_t; 

#pragma pack(1)
typedef struct structa_tagp 
{ 
   char        c; 
   short int   s; 
} structa_tp; 
#pragma pack() 

#pragma pack(1)
// structure B 
typedef struct structb_tagp 
{ 
   short int   s; 
   char        c; 
   int         i; 
} structb_tp; 
#pragma pack()
 
#pragma pack(1)
// structure C 
typedef struct structc_tagp
{ 
   char        c; 
   double      d; 
   int         s; 
} structc_tp; 
#pragma pack()


#pragma pack(1)  
// structure D 
typedef struct structd_tagp 
{ 
   double      d; 
   int         s; 
   char        c; 
} structd_tp; 
#pragma pack()
  
int main() 
{ 
   printf("--With Padding          Without Padding--\n");        
   printf("sizeof(structa_t) = %d\t", sizeof(structa_t)); printf("sizeof(structa_tp) = %d\n", sizeof(structa_tp));
   printf("sizeof(structb_t) = %d\t", sizeof(structb_t)); printf("sizeof(structb_tp) = %d\n", sizeof(structb_tp));
   printf("sizeof(structc_t) = %d\t", sizeof(structc_t)); printf("sizeof(structc_tp) = %d\n", sizeof(structc_tp));
   printf("sizeof(structd_t) = %d\t", sizeof(structd_t)); printf("sizeof(structd_tp) = %d\n", sizeof(structd_tp));
  
   return 0; 
} 

#endif

#if second
#include  <stdio.h>

int main(void)
{
    /*
    With padding the size of struct is 16bytes
    without padding using pragma pack the size of struct is 14bytes
    
    Alignment in memory:
    |0 1 2 3 4 5 6 7 8 9 | 10 11 |12 13 14 15 |
    | char 10 bytes      | pad   | int 4 bytes|
    
    */
    
    #pragma pack(1)
    typedef struct strperson
    {
        char name[10];
        int age;
        
    }person;
    #pragma pack()
    
    person details[2] = {{"Aasai",25},
                         {"Nanda",25}};
    
    person *ptr = &details;
    
    printf("Size of age:%d\n",sizeof(ptr->age));
    printf("Size of details:%d\n",sizeof(details));
    printf("Size of person:%d\n",sizeof(person));
    printf("Size of pointer:%d\n",sizeof(ptr));
    printf("Size of pointer:%d\n",sizeof(*ptr));
    
    printf("The Person Name is %s\n",ptr->name);
    printf("The Person Name is %s\n",(*ptr).name);
    printf("The Person Name is %s\n",(ptr+1)->name);
    
    printf("The Person Age is %d\n",ptr->age);
    printf("The Person Age is %d\n",(*ptr).age);
    printf("The Person Name is %d\n",(ptr+1)->age);
    
    
    return 0; 
}
#endif