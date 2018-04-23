/*
 ============================================================================
 Name        : stack.c
 Author      : Andi
 Version     :
 Copyright   : Andreas Starzer
 Description : Stack in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


NODE *push(NODE *head, int data) {
	NODE *temp = malloc(sizeof(NODE));
	temp->data = data;
	temp->next = head;
	head = temp;
	return head;

}

NODE *pop(NODE *head, int *element) {
	NODE *temp = head;
	*element = head->data;
	head = head->next;
	free(temp);
	return head;
}

void print(NODE *head) {
	NODE *current;
	current = head;

	if (current != NULL) {
		printf("Stack: ");
		do {
			printf("%d ", current->data);
			current = current->next;
		} while (current != NULL);
		printf("\n");
	} else {
		printf("The Stack is empty\n");
	}
}

int empty(struct node* head)
{
    return head == NULL ? 1 : 0;
}

int main(void) {

		NODE *myStack=NULL;

		myStack=push(myStack,7);
		myStack=push(myStack,4);
		myStack=push(myStack,9);
		myStack=push(myStack,1);

		print(myStack);

	    return 0;
}
