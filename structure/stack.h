#pragma once
#include <stdbool.h>
#include "list.h"

/* 定義結構 */
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

/* 初始化資料 */
Stack_t* initAllData_Stack(Stack_t* stack, int n);

/* free 整個 Stack */
void freeAllData_Stack(Stack_t* stack);