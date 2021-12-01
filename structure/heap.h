#pragma once
#include "tree.h"

typedef struct heapArray {
	int* arr;
	int size;
} HeapArray_t;

typedef struct heapTree {
	TreeNode_t* root;
	int size;
} HeapTree_t;

void heapifyMinArray(int *arr, int n, int rootIdx);