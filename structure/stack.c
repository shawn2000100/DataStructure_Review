#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stack.h"

bool isEmpty(Stack_t* stack) {
	assert(stack != NULL);
	return stack->top == NULL;
}

void push(Stack_t* stack, int val) {
	assert(stack != NULL);

	Node* newNode = (Node*) malloc(sizeof(Node));
	assert(newNode != NULL);
	newNode->val = val;
	newNode->next = NULL;

	if (isEmpty(stack)) {
		stack->top = newNode;
	}
	else {
		newNode->next = stack->top;
		stack->top = newNode;
	}

	stack->size += 1;
}

void pop(Stack_t* stack) {
	assert(stack != NULL);

	if (isEmpty(stack) == false) {
		Node* temp = stack->top;
		stack->top = stack->top->next;
		free(temp);
		stack->size -= 1;
	}
}

int peek(Stack_t* stack) {
	assert(stack != NULL);

	if (isEmpty(stack)) {
		return -1;
	}

	return stack->top->val;
}

Stack_t* initAllData_Stack(Stack_t* stack, int n) {
	assert(stack != NULL);

	for (int i = 0; i < n; ++i) {
		push(stack, i + 100);
	}
	
	return stack;
}

void freeAllData_Stack(Stack_t* stack) {
	assert(stack != NULL);

	while (isEmpty(stack) == false) {
		pop(stack);
	}
}