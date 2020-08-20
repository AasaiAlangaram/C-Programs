#include<stdio.h>

struct st_tag
{
	int a;
}st_var;

//typedef both are valid 
typedef struct struct_name
{
	int b;
}tyst_name;

typedef struct 
{
	int c;
}tydifst;

int main(void){
	struct st_tag st_var = {110};
	tyst_name aa = {100};
	tydifst tydifvar = {123};
	
	printf("%d %d %d",st_var.a, aa.b,tydifvar.c);
	
	return 0;
}
