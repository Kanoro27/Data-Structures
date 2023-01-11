#include<stdio.h>
#include<stdlib.h>

struct bst {
	int data;
	struct bst *left;
	struct bst *right;
};

typedef struct bst * NODE;

NODE node;
NODE createtree(NODE node,int data) {
	if (node==NULL) {
		NODE temp;
		temp=(NODE)malloc(sizeof(NODE));
		temp->data=data;
		temp->left=temp->right=NULL;
		return temp;
	}
	if (data < (node->data)) {
		node->left=createtree(node->left,data);
	}
	if (data > (node->data)) {
		node->right=createtree(node->right,data);
	}
	return node;
};

/*NODE search(NODE node,int data) {
	if (node==NULL) printf("\nElements not Found...\n");
	else if (data < node->data ) {
		node->left=search(node->left,data);
	}
	else if (data < node->data ) {
		node->right=search(node->right,data);
	else printf("\nElement found is %d\n",node->data);
	return node;
};*/

void inorder(NODE node) {
	if (node!=NULL) {
		inorder(node->left);
		printf("%d",node->data);
		inorder(node->right);
	}
}

void postorder(NODE node) {
	if (node!=NULL) {
		postorder(node->left);
		postorder(node->right);
		printf("%d",node->data);
	}
}

void preorder(NODE node) {
	if (node!=NULL) {
		printf("%d",node->data);
		preorder(node->left);
		preorder(node->right);
	}
}

void main() {
	int ch=1,data,i,n;
	NODE node=NULL;
	while (ch) {
		printf("\n----MENU----\n");
		printf("1.Create a BST\n");
		printf("2.BST Traversal\n");
		printf("3.Exit\n");
		printf("-------------\n");
		printf("\nEnter a Choice : ");
		scanf("%d",&ch);
		switch (ch) {
			case 1 :
				printf("\nEnter the Number of Elements : ");
				scanf("%d",&n);
				
				for (i=1;i<=n;i++) {
					printf("Enter the value : ");
					scanf("%d",&data);
					node=createtree(node,data);
				}
				break;
			case 2 :
				printf("\nThe Preorder : ");
				preorder(node);
				printf("\nThe Postorder : ");
				postorder(node);
				printf("\nThe Inorder : ");
				inorder(node);
				break;
			case 3 : 
				exit(0);
				break;	
			default :
				printf("\nEnter a correct option...\n");
				break;
		}
	}
}
					
