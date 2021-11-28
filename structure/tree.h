#pragma once

/* 定義結構 */
typedef struct treeNode {
	int val;
	struct treeNode* left;
	struct treeNode* right;
} TreeNode_t;

typedef struct binaryTree {
	TreeNode_t* root;
} BinaryTree_t;

/* 創建樹節點 */
TreeNode_t* createTreeNode(int val);

/* DLR 前序追蹤 */
void preOrderTraversal(TreeNode_t* root);

/* LDR 中序追蹤 */
void inOrderTraversal(TreeNode_t* root);

/* LRD 後序追蹤 */
void postOrderTraversal(TreeNode_t* root);