#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "./structure/array.h"
#include "./structure/list.h"
#include "./structure/stack.h"
#include "./structure/tree.h"
#define Array
#define Linked_List
#define Stack
#define BinaryTree


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

#ifdef Array
    int* ptrArray = NULL;
    ptrArray = (int*) malloc(SIZE * sizeof(int));
    assert(ptrArray != NULL);

    initAllData_Array(ptrArray, SIZE);
    printf("Array Init: ");
    printAllData_Array(ptrArray, SIZE);

    int sumArr = calculateAllDataSum_Array(ptrArray, SIZE);
    printf("After Summing: %d\n", sumArr);
    printAllData_Array(ptrArray, SIZE);

    free(ptrArray);
    printf("------\n");
#endif

#ifdef Linked_List
    Node* ptrList = NULL;
    ptrList = initAllData_List(SIZE);
    assert(ptrList != NULL);
    printf("List Init: ");
    printAllData_List(ptrList);

    int sumList = calculateAllDataSum_List(ptrList);
    printf("After Summing: %d\n", sumList);
    printAllData_List(ptrList);
    printf("After Reverse: \n");
    ptrList = reverseAllData_List(ptrList);
    printAllData_List(ptrList);

    freeAllData_list(ptrList);
    printf("------\n");
#endif

#ifdef Stack
    Stack_t* ptrStack = NULL;
    ptrStack = (Stack_t*) malloc(sizeof(Stack_t));
    assert(ptrStack != NULL);
    ptrStack->top = NULL;
    ptrStack->size = 0;

    initAllData_Stack(ptrStack, SIZE);
    printf("Stack TOP: %d\n", peek(ptrStack));
    pop(ptrStack);
    printf("After Pop: %d\n", peek(ptrStack));

    freeAllData_Stack(ptrStack);
    printf("After Clear Stack: %d\n", peek(ptrStack));
    printf("------\n");
#endif

#ifdef BinaryTree
    BinaryTree_t* ptrTree = NULL;
    ptrTree = (BinaryTree_t*)malloc(sizeof(BinaryTree_t));
    ptrTree->root = createTreeNode(100);
    ptrTree->root->left = createTreeNode(101);
    ptrTree->root->right = createTreeNode(102);
    ptrTree->root->left->left = createTreeNode(103);
    ptrTree->root->left->right = createTreeNode(104);
    ptrTree->root->right->left = createTreeNode(105);
    ptrTree->root->right->right = createTreeNode(106);

    printf("Tree PreOrder: ");
    preOrderTraversal(ptrTree->root);
    printf("\n");

    printf("Tree InOrder: ");
    inOrderTraversal(ptrTree->root);
    printf("\n");

    printf("Tree PostOrder: ");
    postOrderTraversal(ptrTree->root);
    printf("\n");
#endif

    printf("------Finish All Data Structure------\n");
    return 0;
}