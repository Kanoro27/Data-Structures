#include<stdio.h>
#include<stdlib.h>

//Declaration
struct node {
	int info;
	struct node *link;
};

//Preinitializing User defined Functions 
struct node *createlist(struct node *);
struct node *concat(struct node *start1,struct node *start2);
struct node *insertbeg(struct node *start, int data);
struct node *insertend(struct node *start, int data);

void display(struct node *start);

//Main Function
int main() {
	struct node *start1=NULL,*start2=NULL;
	start1=createlist(start1);
	start2=createlist(start2);
	printf("First List is :\n");
	display(start1);
	printf("Second List is :\n");
	display(start2);
	start1=concat(start1,start2);
	printf("Concatination List is :\n");
	display(start1);
	return 0;
}


//Function for Concatenation
struct node *concat(struct node *start1,struct node *start2) {
	struct node *ptr;
	if (start1==NULL) {
		start1=start2;
		return start1;
	}
	if (start2==NULL) return start1;
	ptr=start1;
	while (ptr->link!=NULL) ptr=ptr->link;
	ptr->link=start2;
	return start1;
	
}

//Fucntion for Creating List
struct node *createlist(struct node *start) {
	int i,n,data;
	printf("Enter No. of node : ");
	scanf("%d",&n);
	start=NULL;
	if (n==0) return start;
	printf("Enter the Element 1 : ");
	scanf("%d",&data);
	start=insertbeg(start,data);
	for (i=2;i<=n;i++) {
		printf("Enter the Element %d : ",i);
		scanf("%d",&data);
		start=insertbeg(start,data);
	}
	return start;
}


//Fucntion for Display
void display(struct node *start) {
	struct node *p;
	if (start==NULL) {
		printf("List is Empty..\n");
		return;
	}
	p=start;
	while (p!=NULL) {
		printf("%d ",p->info);
		p=p->link;
	}
	printf("\n");
}

//Function for Inserting element at the Begnnining
struct node *insertbeg(struct node *start,int data) {
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;
	temp->link=start;
	start=temp;
	return start;
}

//Function for Inserting element at the End
struct node *insertend(struct node *start,int data) {
	struct node *p,*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;
	p=start;
	while (p->link!=NULL) p=p->link;
	p->link=temp;
	temp->link=NULL;
	return start;
}
	
	
