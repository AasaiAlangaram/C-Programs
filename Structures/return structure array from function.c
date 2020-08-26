#include<stdio.h>

typedef struct
{
	int (*data)[3];
	int frame; 
	int address;
}mydataframe;


mydataframe* stftoprint(mydataframe (*instptvar[2])[1]);

int a[3] = {1,2,3};
int b[3] = {4,5,6};

mydataframe mdf_var[1] = {&a,2,3};
mydataframe mdf_var_1[1] = {&b,5,6};


int main(void)
{
	
	mydataframe (*ptstvar[2])[1] = {&mdf_var, &mdf_var_1};
	mydataframe stvar;
	*((*ptstvar[0])[0].data)[0] = 5;
	
	//printf("%d", (*ptstvar[0])[0].data);
	printf("%d", *((*ptstvar[0])[0].data)[0]);
	
	ptstvar[0] = stftoprint(ptstvar);
	
	printf("%d\n", *((*ptstvar[0])[0].data)[0]);
	printf("%d\n", *((*ptstvar[0])[0].data)[1]);
	printf("%d\n", *((*ptstvar[0])[0].data)[2]);
	
	printf("%d\n", *((*ptstvar[1])[0].data)[0]);
	printf("%d\n", *((*ptstvar[1])[0].data)[1]);
	printf("%d\n", *((*ptstvar[1])[0].data)[2]);
	
	return 0;
}

mydataframe* stftoprint(mydataframe (*instptvar[2])[1])
{
	static mydataframe (tmpintptr[2])[1]={{&a,2,3}, {&b,5,6}};
	(tmpintptr[0])[0].data = &a;
	
	*((*instptvar[0])[0].data)[0] = 20;
	printf("%d", *((*instptvar[0])[0].data)[0]);
	
	return tmpintptr[0];
}
