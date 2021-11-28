#include <stdlib.h>
#include <assert.h>
#include "tree.h"

TreeNode_t* createTreeNode(int val) {
	TreeNode_t* node = NULL;
	node = (TreeNode_t*) malloc(sizeof(TreeNode_t));
	assert(node != NULL);
	node->val = val;
	node->left = node->right = NULL;
	return node;
}

/* DLR �e�ǰl�� */
void preOrderTraversal(TreeNode_t* root) {
	if (root == NULL) {
		return;
	}

	printf("%d ", root->val);
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
}

/* LDR ���ǰl�� */
void inOrderTraversal(TreeNode_t* root){
	if (root == NULL) {
		return;
	}

	preOrderTraversal(root->left);
	printf("%d ", root->val);
	preOrderTraversal(root->right);
}

/* LRD ��ǰl�� */
void postOrderTraversal(TreeNode_t* root) {
	if (root == NULL) {
		return;
	}

	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
	printf("%d ", root->val);
}