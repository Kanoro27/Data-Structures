#include<stdio.h>
#include<stdlib.h>

struct bst {
	int data;
	struct bst left;
	struct bst right;
};

typedef struct bst NODE;

NODE *node;
NODE *createtree(NODE *node,int data) {
	if (node==NULL) {
		NODE *temp;
		temp=(NODE*)malloc(sizeof(NODE));
		temp->data=data;
		temp->left=temp->right=NULL;
		return temp;
	}
	if (data < (node->data)) {
		node->left=createtree(node->left,data);
	}
	return node;
}

NODE *search(NODE *node,int data) {
	if (node==NULL) printf({"\nElements not Found...\n");
	else if (data < node->data ) {
		node->right=search(node->right,data);
	}
	else printf("\nElement found is %d\n",node->data);
	return node;
}

void inorder(NODE *node) {
	if (node
