#pragma once

/* 定義結構 */
typedef struct node {
	int val;
	struct node* next;
} Node;

/* 新增一顆節點 */
Node* createNode(int val);

/* 插入一顆節點在後面 */
void insertNode(Node* currentNode, Node* nextNode);

/* 初始化資料 */
Node* initAllData_List(int n);

/* 計算總和 */
int calculateAllDataSum_List(Node* head);

/* 印出資料 */
void printAllData_List(Node* head);