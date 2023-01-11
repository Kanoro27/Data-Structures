#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left,*right;
};

typedef struct node * NODE;

void printcurrlevel(NODE root, int level);
int height(NODE node);
NODE newnode(int data);
void inorder(NODE node);
void preorder(NODE node);
void postorder(NODE node);

void printlevelorder(NODE root) {
	int h = height(root);
	int i;
	
	for (i=1;i<=h;i++) printcurrlevel(root,i);
	printf("\t");
}

void printcurrlevel(NODE root,int level) {
	if (root==NULL) return;
	if (level==1) printf("%d",root->data);
	else if (level>1) {
		printcurrlevel(root->left,level-1);
		printcurrlevel(root->right,level-1);
	}
}

int height (NODE node) {
	if (node==NULL) return 0;
	else {
		int lheight = height(node->left) ;
		int rheight = height(node->right) ;
		if (lheight > rheight ) return lheight+1;
		else return rheight+1;
	}
}

NODE newnode(int data) {
	NODE node = (NODE)malloc(sizeof(NODE));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}
/*
void inorder(NODE node) {
	if (node!=NULL) return;
	inorder(node->left);
	printf("%d",node->data);
	inorder(node->right);
}

void postorder(NODE node) {
	if (node!=NULL) return;
	postorder(node->left);
	postorder(node->right);
	printf("%d",node->data);
}

void preorder(NODE node) {
	if (node!=NULL) return;
	printf("%d",node->data);
	preorder(node->left);
	preorder(node->right);
}*/

int main () {
	NODE root = newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->right->right=newnode(10);
	root->left->right->right=newnode(23);
	printf("Traversal of Binary Tree :\n");
	printf("\nLevel Order : ");
	printlevelorder(root);
	return 0;
}
