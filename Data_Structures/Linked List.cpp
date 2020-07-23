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

int main()
{
	//creating three nodes
	node_t n1,n2,n3;
	//creating head node
	node_t* head;
	
	n1.value = 1;
	n2.value = 2;
	n3.value = 3;
	
	//link them up
	head = &n3;
	n3.next = &n1;
	n1.next = &n2;
	n2.next = NULL; //stop linking
	
	printlinkedlist(head);
	
	return 0;
}
