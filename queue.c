#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();

struct node {
	int value;
	struct node *next;
};

struct node *head;

void main() {
	int choice=0;
	
	while(choice!=4) {
		printf("------Stack operations using linked list------\n");
		printf("1.Push\n2.Pop\n3.Show\n4.Exit\n");
		printf("----------------------------------------------\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch (choice) {
			case 1 :
			push();
			break;
			case 2 :
			pop();
			break;
			case 3 :
			display();
			case 4 :
			exit(1);
			break;
			default :
			printf("Enter Correct Option...\n");
			return 0;
			break;
		}
	}
}

void push() {
	int value;
	struct node *ptr =(struct node*)malloc(sizeof(struct node));
	if (ptr==NULL) {
		printf("Not able to Push Element...\n");
		return 0;
	}
	else {
		printf("Enter the Value :");
		scanf("%d",&value);
		if (head==NULL) {
			ptr->value=value;
			ptr->next=NULL;
			head=ptr;
		}
		else {
			ptr->value=value;
			ptr->next=head;
			head=ptr;
		}
	}
	printf("Item Pushed...\n\n");
}

void pop() {
	int item;
	struct node *ptr;
	if (head==NULL) {
		printf("Not able to pop Element..\n\n");
	}
	else {
		item=head->value;
		ptr=head;
		head=head->next;
		free(ptr);
		printf("Item Popped...\n\n");
	}
}

void display() {
	int i;
	struct node *ptr;
	ptr=head;
	if (head==NULL) {
		printf("Stack is Empty...\n");
	}
	else {
		printf("Printing The Stack of Element...\n");
		while (ptr!=NULL) {
			printf("| %d |\n",ptr->value);
			ptr=ptr->next;
		}
	}
}
	
		
