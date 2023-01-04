#include<stdio.h>
#include<stdlib.h>
#define max 5 //max is the max size of the stack assigned for demo

int s[max]; //declaration of a stack
int top=-1; //minimum top element


//declaration of user defined functions

void push(int item);
int pop();
void display();

//Main Program

void main() {
 	int choice, item; // declaring choice os user defined input, item is the element input
	while (1) {
		// Menu page
		printf("\n------MENU------\n"); 
		printf("1:Push an Element to a Stack and Overflow Demo.\n");
		printf("2:Pop an Element from Stack and Underflow Demo.\n");
		printf("3:Display.\n");
		printf("4:Exit\n");
		printf("----------------\n");
		
		//Takin the choice
		printf("\nEnter the Choice : "); 
		scanf("%d",&choice);
		// using switch to run the loophole
		switch(choice) {
			case 1: //pushing an element using user defined push() function
			printf("\nEnter an Element to be Pushed :");
			scanf("%d",&item);
			push(item);
			break;
			case 2: // Poping the element using user defined pop() function
			item=pop();
			if (item!=-1);
			printf("\nElement Popped is %d.\n\n",item);
			break;
			case 3: //Displaying of Stack elements
			display();
			break;
			case 4: // exit
			exit(1);
			default:
			printf("\nPlease Enter Valid Choice...\n");
			break;
		}
	}
}

//User defined Push function 

void push(int item) {
	if (top==max-1) { //if the top position 4 nd max is 5-1=4 no more elements are taken in hence more input would cause overflow
		printf("\n------Stack Overflow------\n");
		return;
	}
	top+=1; //top increases every time we input
	s[top]=item; // element is assigned to the stack
	printf("Element Pushed");
}

//user defined pop function to delete elements

int pop() {
	int item;
	if (top==-1) { //if the elements is less than 0 there is nothing to delete hence underflow 
		printf("\n------Stack Underflow-----\n");
		return -1;
	}
	item=s[top]; //item popped
	top-=1; //top reduces every time the function is used
	printf("Element Popped");  
	return item;
}

//displaying the stack 

void display() {
	int i;
	if (top==-1) {
		printf("\n------Stack is Empty------\n");
		return; //there is no element in the stack..
	}
	printf("\nStack Elements are : \n\n"); //Displays the stack when its not empty
	for (i=top;i>=0;i--) {
		printf("| %d |\n\n",s[i]);
	}
}		
		
