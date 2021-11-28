#include <stdio.h>
#include "array.h"

void initAllData_Array(int* arr, int n)
{
	for (size_t i = 0; i < n; ++i) {
		arr[i] = (int) i + 100;
	}
}

int calculateAllDataSum_Array(int* arr, int n)
{
	int sum = 0;
	for (size_t i = 0; i < n; ++i) {
		sum += arr[i];
	}
	return sum;
}

void printAllData_Array(int* arr, int n)
{
	for (size_t i = 0; i < n; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}