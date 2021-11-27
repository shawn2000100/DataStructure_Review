#include <stdio.h>

void initAllData_Array(int** arr, int n)
{
	for (int i = 0; i < n; ++i) {
		(*arr)[i] = i;
	}
}

int calculateAllDataSum_Array(int** arr, int n)
{
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += (*arr)[i];
	}
	return sum;
}

void printAllData_Array(int** arr, int n)
{
	for (int i = 0; i < n; ++i) {
		printf("%d ", (*arr)[i]);
	}
	printf("\n");
}