#include <stdio.h>
int main(void)
{

char *ptr;
char board[3][3] = {
{'1','2','3'},
{'4','5','6'},
{'7','8','9'}
};

ptr = (char *)board;

// List all elements of the array
for(int i = 0 ; i < 9 ; ++i)
{
	
	printf(" board: %p\t", *board + i);
	printf(" board: %c\n", **board + i);
	printf(" board: %p\t", (*board + i));
	printf(" board: %c\n", *(*board + i));
	//printf(" board: %p\t", *(board + i));
	//printf(" board: %c\n", *(*(board + i)));
	
}

for(int j = 0;j<3;j++)
{
	for(int k = 0;k<3;k++)
	{
		printf(" board: %p\n", *(board + j)+k);
	}
}

for(int m = 0 ; m< 9 ; ++m)
printf(" board: %c\n", *(ptr + m));


return 0;
}
