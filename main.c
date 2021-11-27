#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
// Data Structure
#include "./structure/array.h"

/* 資料結構複習範例:
 * 0. Array (Warm-Up)
   1. Linked_List
   2. Double_Linked_List
   3. Hash
*/
int main()
{
    const int SIZE = 10;

#ifdef ARRAY
    int* ptrArray = NULL;
    ptrArray = (int*) calloc(SIZE, sizeof(int));
    assert(ptrArray != NULL);

    initAllData_Array(&ptrArray, SIZE);
    printf("After Init: ");
    printAllData_Array(&ptrArray, SIZE);

    int sum = calculateAllDataSum_Array(&ptrArray, SIZE);
    printf("After Summing: %d\n", sum);
    printAllData_Array(&ptrArray, SIZE);

    free(ptrArray);
#endif

#ifdef Linked_List


#endif

#ifdef Double_Linked_List

#endif

    printf("------Finish All Data Structure------\n");
    return 0;

}