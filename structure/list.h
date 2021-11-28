#pragma once

/* �w�q���c */
typedef struct node {
	int val;
	struct node* next;
} Node;

/* �s�W�@���`�I */
Node* createNode(int val);

/* ���J�@���`�I�b�᭱ */
void insertNode(Node* currentNode, Node* nextNode);

/* ��l�Ƹ�� */
Node* initAllData_List(int n);

/* �p���`�M */
int calculateAllDataSum_List(Node* head);

/* �����C */
Node* reverseAllData_List(Node* head);

/* �L�X��� */
void printAllData_List(Node* head);

/* free ��� List */
void freeAllData_list(Node* head);