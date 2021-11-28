#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"


Node* createNode(int val) {
	Node* temp = NULL;
	temp = (Node*) malloc(sizeof(Node));
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
	head = (Node*) malloc(sizeof(Node));
	assert(head != NULL);

	head->val = 100;
	head->next = NULL;

	// The rest of Nodes
	Node* ptrCurrent = head;
	for (size_t i = 1; i < n; ++i) {
		Node* newNode = NULL;
		newNode = createNode((int) i + 100);
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

Node* reverseAllData_List(Node* head) {
	assert(head != NULL);

	Node* prev = NULL;
	Node* curr = head;
	Node* next = NULL;
	while (curr != NULL) {
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
	return head;
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

void freeAllData_list(Node* head) {
	while (head != NULL) {
		Node* ptrCurrent = head;
		head = head->next;
		free(ptrCurrent);
	}
}