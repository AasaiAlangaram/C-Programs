
#include <stdio.h>

typedef union 
{
    int a;
    int b;
   
}myunion;


typedef struct 
{
    int a;
    int b;
}mystruct;

int main()
{
    myunion unionvar;
    mystruct stvar;
    
    stvar.b =4;
    
    unionvar.b = 4;
    
    printf("Address of union:%p\n",&unionvar.a);printf("Address of union:%p\n",&unionvar.b);
    
    printf("%d\n",unionvar.a);
    
    unionvar.a = 2;
    
    printf("%d\n",unionvar.b);
    
    printf("%d\n",stvar.a);printf("%d\n",stvar.b);

    return 0;
}
