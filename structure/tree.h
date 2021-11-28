#pragma once

/* �w�q���c */
typedef struct treeNode {
	int val;
	struct treeNode* left;
	struct treeNode* right;
} TreeNode_t;

typedef struct binaryTree {
	TreeNode_t* root;
} BinaryTree_t;

/* �Ыؾ�`�I */
TreeNode_t* createTreeNode(int val);

/* DLR �e�ǰl�� */
void preOrderTraversal(TreeNode_t* root);

/* LDR ���ǰl�� */
void inOrderTraversal(TreeNode_t* root);

/* LRD ��ǰl�� */
void postOrderTraversal(TreeNode_t* root);