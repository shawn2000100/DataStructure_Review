#pragma once

/* �w�q���c */
typedef struct node {
	int val;
	struct node* next;
} Node;

/* �s�W�@���`�I */
Node* createNode(int val);

/* ��l�Ƹ�� */
Node* initAllData_List(int n);

///* �p���`�M */
//int calculateAllDataSum_List(Node* list);

/* �L�X��� */
void printAllData_List(Node* head);