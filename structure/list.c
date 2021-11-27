#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"


Node* createNode(int val) {
	Node* temp = NULL;
	temp = (Node*) calloc(1, sizeof(Node));
	assert(temp != NULL);
	temp->val = val;
	temp->next = NULL;
	return temp;
}

void insertNode(Node* currentNode, Node* nextNode) {
	assert(currentNode != NULL);
	assert(nextNode != NULL);
	nextNode->next = currentNode->next;
	currentNode->next = nextNode;
}

Node* initAllData_List(int n) {
	Node* head = NULL;
	head = (Node*) calloc(1, sizeof(Node));
	assert(head != NULL);

	head->val = 100;
	head->next = NULL;

	// The rest of Nodes
	Node* ptrCurrent = head;
	for (size_t i = 1; i < n; ++i) {
		Node* newNode = NULL;
		newNode = createNode(i + 100);
		insertNode(ptrCurrent, newNode);

		assert(ptrCurrent != NULL);
		ptrCurrent = ptrCurrent->next;
	}
	return head;
}

int calculateAllDataSum_List(Node* head) {
	assert(head != NULL);

	int sum = 0;
	Node* ptrCurrent = head;
	while (ptrCurrent != NULL) {
		sum += ptrCurrent->val;
		ptrCurrent = ptrCurrent->next;
	}
	return sum;
}

void printAllData_List(Node* head) 
{
	assert(head != NULL);

	Node* ptrCurrent = head;
	while (ptrCurrent != NULL) {
		printf("%d ", ptrCurrent->val);
		ptrCurrent = ptrCurrent->next;
	}
	printf("\n");
}