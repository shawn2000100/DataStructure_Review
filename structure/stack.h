#pragma once
#include <stdbool.h>
#include "list.h"

/* �w�q���c */
typedef struct stack {
	Node* top;
	int size;
} Stack_t;

bool isEmpty(Stack_t* stack);

/* Push */
void push(Stack_t* stack, int val);

/* Pop */
void pop(Stack_t* stack);

/* peek */
int peek(Stack_t* stack);

/* ��l�Ƹ�� */
Stack_t* initAllData_Stack(Stack_t* stack, int n);

/* free ��� Stack */
void freeAllData_Stack(Stack_t* stack);