/*main file for testing Static Stack implementation*/

#include<stdio.h>
#include<stdlib.h>

#ifndef DYNAMICSTACK_C
#include "dynamicStack.c"
#endif

#ifndef DYNAMICSTACK_H
#include "dynamicStack.h"
#endif

#define PRINT_STACK printf("\nTop->");\
					for(dStack_t * ptr=Stack;ptr != NULL;ptr=ptr->next)\
						printf("%d->",ptr->data);\
					printf("END\n");\

int main(void)
{
	int status, data;
	dStack_t *Stack;
	
	StackInit(&Stack);
	
	status=isEmpty(Stack);
	if(status)
		printf("\nStack is Empty.\n");
	else 
		printf("\nStack is NOT Empty.\n");
	
	push(&Stack,10);
	push(&Stack,20);
	push(&Stack,30);
	push(&Stack,40);
	
	PRINT_STACK;
	
	push(&Stack,50);
	//push(&Stack,60);
	
	PRINT_STACK;
	
	status=pop(&Stack,&data);
	if(status)
		printf("\nPopped data = %d ",data);
	else
		printf("\nStack is Empty.");
	
	status=pop(&Stack,&data);
	if(status)
		printf("\nPopped data = %d ",data);
	else
		printf("\nStack is Empty.");
	
	PRINT_STACK;
	
	status=pop(&Stack,&data);
	if(status)
		printf("\nPopped data = %d ",data);
	else
		printf("\nStack is Empty.");
	
	status=pop(&Stack,&data);
	if(status)
		printf("\nPopped data = %d ",data);
	else
		printf("\nStack is Empty.");
	
	status=pop(&Stack,&data);
	if(status)
		printf("\nPopped data = %d ",data);
	else
		printf("\nStack is Empty.");
	
	status=pop(&Stack,&data);
	if(status)
		printf("\nPopped data = %d ",data);
	else
		printf("\nStack is Empty.");
	
	PRINT_STACK;
}