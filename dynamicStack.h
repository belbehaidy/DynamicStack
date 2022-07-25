/*Header file for Dynamic Stack declerations*/

#define DYNAMICSTACK_H

typedef struct node
{
	int data;
	struct node *next;
}dStack_t;

void StackInit(dStack_t **Stack);
int isEmpty(dStack_t *Stack);
int push(dStack_t **Stack,int data);
int pop(dStack_t **Stack,int *data);
int peek(dStack_t *Stack,int *data);