#include<stdio.h>

typedef struct node
{
	int value;
	int (*ptr)[5];
}node_t;

void printstvar(node_t **stptvar)
{
	*(*stptvar)->ptr[0] = 5;
	printf("stvarvalue - %d\n",(*stptvar)->value);
}

void printdoublepointer(int **dptr)
{
	printf("value : %d\n",**dptr);
}

int main()
{
	int a = 3;
	int arr[5] = {1,2,3,4,5};
	
	int *ptrtoint = &a;
	
	node_t stvar = {4,&arr};
	node_t *stpvar = &stvar;
	node_t **stppvar = &stpvar;
	
	printf("address of struct  : %p\n",&stvar);
	printf("value in *stpvar   : %p\n",stpvar);
	printf("value in **stppvar : %p\n",*stppvar);
	
	printf("stvarvalue - %d\n",stpvar->value);
	printf("*(stpvar->ptr)[0] - %d\n",*(stpvar->ptr)[0]);
	
	printf("stvarvalue - %d\n",(*stppvar)->value);
	printf("*(*stppvar)->ptr[0] - %d\n",*(*stppvar)->ptr[0]);
	
	printstvar(stppvar);
	
	printdoublepointer(&ptrtoint);
	
	printf("*(*stppvar)->ptr[0] - %d\n",*(*stppvar)->ptr[0]);
	
	return 0;
}
