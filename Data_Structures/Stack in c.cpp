#include<stdio.h>
#include<limits.h>
#include<stdbool.h>

#define STACK_LENGTH 5
#define EMPTY -1
#define STACK_EMPTY INT_MIN

int stack[STACK_LENGTH];
int top = EMPTY;

bool pushintostack(int input)
{
	if(top >= STACK_LENGTH-1)  return false;
	
	top++;
	stack[top] = input;
	
	return true;
}

int popfromstack()
{
	if(top == EMPTY) return STACK_EMPTY;
	
	int out = stack[top];
	top--;
	
	return out;
}

int main()
{
	int stack_out;
	
	pushintostack(55);	
	pushintostack(44);
	pushintostack(33);
	
	// code for pop out single element from stack 
	//stack_out = popfromstack();
	
	//code for pop out all elements from stack 
	
	while((stack_out = popfromstack()) != STACK_EMPTY)
	{
		printf("stack_out - %d\n",stack_out);
	}
	
	//printf("%d",stack_out);
	
	return 0;
	
}
