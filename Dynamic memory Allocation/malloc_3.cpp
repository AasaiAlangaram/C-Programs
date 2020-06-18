#include<stdio.h>
#include<stdlib.h>
	int main()
	{
		int *ptr_one;
		int a = 34;

		ptr_one = (int *)malloc(sizeof(int));printf("Address :%p\n", &ptr_one);
		
		if (ptr_one == NULL)
		{
			printf("ERROR: Out of memory\n");
			return 1;
		}

		ptr_one = &a;
		printf("Address :%p\n", &ptr_one);
		printf("%d\n", *ptr_one);

		free(ptr_one);printf("%d\n", *ptr_one);

		return 0;
	}
