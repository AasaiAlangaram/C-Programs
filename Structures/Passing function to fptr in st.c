#if 1

#include<stdio.h>

//structure with 2 members
//one integer and another function pointer
typedef struct 
{
    int a;
    void (*stptrvar)();
}iamout;

//structure with one int member and structure member 
typedef struct 
{
    int b;
    iamout outvar; 
    
}iamin;

//function is defined to be called by the structure 
void funcfirst()
{
    printf("Function calling by structure\n");
}

//main function 
int main()
{
    //initialize values
    iamin invar = {3, {4, {funcfirst}}};
    iamout outvar1;
    outvar1.stptrvar = funcfirst; 
    
    //access member b from invar structure
    printf("%d\n",invar.b);
    //access member a from outvar structure
    printf("%d\n",invar.outvar.a);
    //access function pointer inside iamout structure
    outvar1.stptrvar();
    invar.outvar.stptrvar();
    
    return 0;
}
#endif

#if 0

#include<stdio.h>
typedef struct
{
   int *a;
   char (*fptr)(char*);
}structure1;

typedef struct
{
   int x;
   structure1 *ptr;
}structure2;

char foo(char * c)
{
return 'c';
}

int main()
{
 structure1 s1;
 structure2 s2;
 s1.fptr = foo;
 s2.ptr = &s1; 
 char c = 'c';
 printf("%c\n", s2.ptr->fptr(&c));
 printf("%c\n", s1.fptr((char* )c));
return 0;
}

#endif