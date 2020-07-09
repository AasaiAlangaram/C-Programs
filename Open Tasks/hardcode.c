#include <stdio.h>

struct age
{
    int var;
};

typedef struct 
{
    int h_var;
    struct age *ptagevar;
}height;


void add(int *a, int *b, int *c)
{
    *c = *a + *b;
}

void sub(int *a, int *b, int *c)
{
    *c = *a - *b;
}

void mul(int *a, int *b, int *c)
{
    *c = *a * *b;
}

void printst(struct age ptvar, height *hvar)
{
    printf("function overwrite structure member value\n");
    struct age *pt = &ptvar;
    height *pstvar = hvar;
    
    pt->var = 30;
    *(&ptvar.var) = 40;
    pstvar->h_var = 180;
    pstvar->ptagevar=(struct age *)&pt;
    
    printf("%d\n",pt->var);
    printf("%d\n",pstvar->h_var);
}

int main()
{
    int a=4,b=1,c=0;
    
    void (*fnptr[3])(int *,int *,int *) = {add,sub,mul};

    struct age stvar = {20};
    height hstvar[5] = {{96},{97},{98},{99},{100}};
    
    fnptr[0](&a,&b,&c);
    printf("c:%d\n",c);
    
    fnptr[1](&a,&b,&c);
    printf("c:%d\n",c);
    
    fnptr[2](&a,&b,&c);
    printf("c:%d\n",c);
    
    printf("%d\n",stvar.var);
    printf("%d\n",hstvar[0].h_var);
    
    printst(stvar,&hstvar[0]);
    
    

    return 0;
}
