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

Node* initAllData_List(int n) {
	Node* head = NULL;
	head = (Node*) calloc(1, sizeof(Node));
	assert(head != NULL);

	head->val = 100;
	head->next = NULL;

	// The rest of Nodes
	Node* ptrCurrent = head;
	for (size_t i = 1; i < n; ++i) {
		Node* temp = NULL;
		temp = (Node*) calloc(1, sizeof(Node));
		assert(temp != NULL);

		temp->val = i + 100;
		temp->next = NULL;

		ptrCurrent->next = temp;
		ptrCurrent = ptrCurrent->next;
	}
	return head;
}

void printAllData_List(Node* head) 
{
	Node* ptrCurrent = head;
	while (ptrCurrent != NULL) {
		printf("%d ", ptrCurrent->val);
		ptrCurrent = ptrCurrent->next;
	}
}