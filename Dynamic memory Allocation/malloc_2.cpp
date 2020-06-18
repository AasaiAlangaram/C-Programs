
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
	char *str;
	
	str = (char *) malloc(15);
	
	strcpy(str , "Aasaialangaram");
	
	printf("%s",str);
	
	return 0;
}

