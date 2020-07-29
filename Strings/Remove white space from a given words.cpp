#include<stdio.h>
#include<string.h>
char *remove_spaces(char* str)
{
	static int i,j;
	
    while (str[i]!='\0')
	{
		if (str[i] != ' ')
          str[j++] = str[i];
		i++;
	}
	str[j] = '\0';
	return str;
}

int main()
{
	char charr[50];
	
	printf("Enter a string :");
	scanf("%[^\n]", &charr);
	
	remove_spaces(charr);
	
	printf("\nOutput :%s",charr);
	
	return 0;
}
