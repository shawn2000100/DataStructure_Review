﻿#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "./structure/array.h"
#include "./structure/list.h"
#define ARRAY
#define Linked_List

/* 資料結構複習範例:
   0. Array (Warm-Up)
   1. Linked_List
   2. Double_Linked_List
   3. Hash
   4. Binary Tree
*/
int main()
{
    const int SIZE = 10;

#ifdef ARRAY
    int* ptrArray = NULL;
    ptrArray = (int*) calloc(SIZE, sizeof(int));
    assert(ptrArray != NULL);

    initAllData_Array(ptrArray, SIZE);
    printf("Array Init: ");
    printAllData_Array(ptrArray, SIZE);

    int sum = calculateAllDataSum_Array(ptrArray, SIZE);
    printf("After Summing: %d\n", sum);
    printAllData_Array(ptrArray, SIZE);
    printf("------\n");
    free(ptrArray);
#endif

#ifdef Linked_List


#endif

#ifdef Double_Linked_List

#endif

    printf("------Finish All Data Structure------\n");
    return 0;

}