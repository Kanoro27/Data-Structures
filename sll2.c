#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int count=0;

struct node {
	int sem,phone;
	char name[20],branch[10],usn[20];
	struct node *next;
} *first=NULL,*last=NULL,*temp=NULL,*temp1;

void create() {
	int sem,phone;
	char name[20],branch[10],usn[20];
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter Usn,  Name, Branch, Semester, and Phone Number :\n");
	scanf("%s%s%s%d%d",usn,name,branch,&sem,&phone);
	strcpy(temp->usn,usn);
	strcpy(temp->name,name);
	strcpy(temp->branch,branch);
	temp->sem=sem;
	temp->phone=phone;
	temp->next=NULL;
	count++;
}

void insertfront() {
	if (first==NULL) {
		create();
		first=temp;
		last=first;
	}
	else {
		create();
		temp->next=first;
		first=temp;
	}
}	

void insertend() {
	if (first==NULL) {
		create();
		first=temp;
		last=first;
	}
	else {
		create();
		last->next=temp;
		last=temp;
	}
}

void display() {
	temp1=first;
	if (temp1==NULL) {
		printf("List empty to Display\n");
		return;
	}
	printf("\nLinked List Elements from Beginning :\n");
	while (temp1!=NULL) {
		printf("%s\t%s\t%s\t%d\t%d\n",temp1->usn,temp1->name,temp1->branch,temp1->sem,temp1->phone);
		temp1=temp1->next;
	}
	printf("Number of Students = %d\n\n",count);
}

int deleteend() {
	struct node *temp;
	temp=first;
	if (temp->next==NULL) {
		free(temp);
		first==NULL;
	}
	else {
		while (temp->next!=last) {
			temp=temp->next;
			printf("%s\t%s\t%s\t%d\t%d\n",last->usn,last->name,last->branch,last->sem,last->phone);
			free(last);
			temp->next=NULL;
			last=temp;
		}
	count--;
	return 0;
	}
}

int deletefront() {
	struct node *temp;
	temp=first;
	if (temp->next==NULL) {
		free(temp);
		first==NULL;
		return 0;
	}
	else {
		while (temp->next!=last) {
			temp=temp->next;
			printf("%s\t%s\t%s\t%d\t%d\n",temp->usn,temp->name,temp->branch,temp->sem,temp->phone);
			free(temp);
		}
	count--;
	return 0;
	}
}
void main() {
	int i,n,choice;
	first=NULL;
	temp=temp1=NULL;
	printf("-----------------------MENU-----------------------");
	printf("\n1. Create Singly Linked List of n Elements.\n");
	printf("2. Display from Beginning.\n");
	printf("3. Insert at the End.\n");
	printf("4. Delete at the End.\n");
	printf("5. Insert at the Beginning.\n");
	printf("6. Delete at the Beginning.\n");	
	printf("7. Exit.\n");
	printf("---------------------------------------------------\n");
	while (1) {
		printf("Enter Choice :");
		scanf("%d",&choice);
		switch (choice) {
			case 1 :
			printf("Enter the Number of Students :");
			scanf("%d",&n);
			for (i=0;i<n;i++) insertfront();
			break;
			case 2 :
			display();
			break;
			case 3 :
			insertend();
			break;
			case 4 :
			deleteend();
			break;
			case 5 :
			insertfront();
			break;
			case 6 :
			deletefront();
			break;
			case 7 :
			exit(1);
			default :
			printf("Choose a Correct Option...\n");
			return 0;
			break;
		}
	}
}
