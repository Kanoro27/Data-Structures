#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int count=0;

struct node {
	int data;
	int ssn,phone;
	float sal;
	char name[20],dept[10],desg[20];
	struct node *prev;
	struct node *next;
}*h,*temp,*temp1,*temp2,*temp4;

typedef struct node* NODE;

void create() {
	int ssn,phone;
	float sal;
	char name[20],dept[10],desg[20];
	temp=(NODE*)malloc(sizeof(NODE));
	temp->prev=NULL;
	temp->next=NULL;
	printf("\nEnter SSN, Name, Department, Designation, Salary and Phone Number of the Employee :\n");
	scanf("%d %s %s %s %f %d",&ssn,name,dept,desg,&sal,&phone);
	temp->ssn=ssn;
	strcpy(temp->name,name);
	strcpy(temp->dept,dept);
	strcpy(temp->desg,desg);
	temp->sal=sal;
	temp->phone=phone;
	count++;
}

void insertbeg() {
	if (h==NULL) {
		create();
		h=temp;
		temp1=h;
	}
	else {
		create();
		temp->next=h;
		h->prev=temp;
		h=temp;
	}
}

void insertend() {
	if (h==NULL) {
		create();
		h=temp;
		temp1=h;
	}
	else {
		create();
		temp1->next=h;
		temp->prev=temp1;
		temp1=temp;
	}
}

void display() {
	temp2=h;
	if (temp2==NULL) {
		printf("List is empty...\n");
		return;
	}
	printf("\n\nLinked list elements from Beginning :\n");
	while (temp2!=NULL) {
		printf("%d %s %s %s %.2f %d\n",temp2->ssn,temp2->name,temp2->dept,temp2->desg,temp2->sal,temp2->phone);
		temp2=temp2->next;
	}
	printf("Number of Employees : %d\n ",count);
}

int deleteend() {
	NODE temp;
	temp=h;
	if (temp->next==NULL) {
		free(temp);
		h=NULL;
		return 0;
	}
	else {
		temp2=temp1->prev;
		temp2->next=NULL;
		printf("%d %s %s %s %.2f %d\n\n",temp1->ssn,temp1->name,temp1->dept,temp1->desg,temp1->sal,temp1->phone);
		free(temp1);
	}
	count--;
	return 0;
}

int deletebeg() {
	NODE temp;
	temp=h;
	if (temp->next==NULL) {
		free(temp);
		h==NULL;
	}
	else {
		h=h->next;
		printf("%d %s %s %s %.2f %d\n\n",temp->ssn,temp->name,temp->dept,temp->desg,temp->sal,temp->phone);
		free(temp);
	}
	count--;
	return 0;
}
void main() {
	int ch=1,n,i;
	temp=temp1=NULL;
	while (ch) {
		printf("\n\n----MENU---\n");
		printf("1.Create a DLL of n Employees\n");
		printf("2.Display from the Beginning\n");
		printf("3.Insert at Beginning\n");
		printf("4.Delete at Beginning\n");
		printf("5.Insert at End\n");
		printf("6.Delete at End\n");
		printf("7.Exit\n");
		printf("-----------\n");
		printf("\nEnter you Choice :");
		scanf("%d",&ch);
		switch(ch) {
			case 1 :
				printf("Enter the Number of Employees Data to be Entered : ");
				scanf("%d",&n);
				for (i=0;i<n;i++) insertend();
				break;
			case 2 :
				display();
				break;
			case 3 :
				insertbeg();
				break;
			case 4 :
				deletebeg();
				break;
			case 5 :
				insertend();
				break;
			case 6 :
				deleteend();
				break;
			case 7 :
				exit(0);
				break;
			default :
				printf("\nEnter a Corect option...\n");
		}
	}
}

