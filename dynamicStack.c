/*Implementation of Dynamic Stack Header file functions*/

#define DYNAMICSTACK_C

#ifndef DYNAMICSTACK_H
#include "dynamicStack.h"
#endif

void StackInit(dStack_t **Stack)
{
	(*Stack)= NULL;
}
int isEmpty(dStack_t *Stack)
{
	return( Stack == NULL );
}
int push(dStack_t **Stack,int data)
{
	int pushed=1;
	
	dStack_t *new = (dStack_t *)malloc(sizeof(dStack_t));
	if(new != NULL)
	{
		new->data=data;
		new->next = (*Stack);
		(*Stack)=new;
	}
	else pushed=0;
	
	return pushed;
}
int pop(dStack_t **Stack,int *data)
{
	int popped=1;
	
	if(!isEmpty(*Stack))
	{
		*data=(*Stack)->data;
		dStack_t *temp = (*Stack);
		(*Stack)=(*Stack)->next;
		free(temp);
	}
	else popped=0;
	
	return popped;
}
int peek(dStack_t *Stack,int *data)
{
	int peeked=1;
	
	if(!isEmpty(Stack))
	{
		*data=Stack->data;
	}
	else peeked=0;
	
	return peeked;
}