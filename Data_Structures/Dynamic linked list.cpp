#include<stdio.h>
#include<limits.h>
#include<stdbool.h>
#include<stdlib.h>

typedef struct node{
	
	int value;
	struct node* next;
}node_t;

void printlinkedlist(node_t* head)
{
	node_t* tmp_list = head;
	
	while(tmp_list!=NULL)
	{
		printf("%d\t",tmp_list->value);
		tmp_list = tmp_list->next;
	}
}

node_t *create_new_node(int value)
{
	node_t * result = (node_t*)malloc(sizeof(node_t));
	result->value = value;
	result->next = NULL;
	return result;
}

int main()
{
	node_t* head;
	node_t* tmp;
	
	tmp = create_new_node(1);
	head = tmp;
	tmp = create_new_node(2);
	tmp->next = head;
	head = tmp;
	tmp = create_new_node(3);
	tmp->next = head;
	head = tmp;
	 
	printlinkedlist(head);
	
	return 0;
}
