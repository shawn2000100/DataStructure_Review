#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "heap.h"

void swap(int* value1, int* value2) {
	int temp = *value1;
	*value1 = *value2;
	*value2 = temp;
}

void heapifyMinArray(int* arr, int n, int rootIdx) {
	int minIdx = rootIdx;
	int lftIdx = 2 * rootIdx + 1;
	int rhtIdx = 2 * rootIdx + 2;

	if (lftIdx < n && arr[lftIdx] < arr[minIdx]) {
		minIdx = lftIdx;
	}
	if (rhtIdx < n && arr[rhtIdx] < arr[minIdx]) {
		minIdx = rhtIdx;
	}

	// Heapify Child
	if (minIdx != rootIdx) {
		swap(&arr[minIdx], &arr[rootIdx]);
		heapifyMinArray(arr, n, minIdx);
	}
}