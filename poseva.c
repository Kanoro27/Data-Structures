#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Declaration
int i, top=-1; 
int op1, op2, res,s[20]; //op1,op2 are Two operators, res is Result and s[20] is a number array of 20 elements
char postfix[90],symb; //symb is symbol for the given

//creating function to push elements
void push(int item) {
	top+=1;
	s[top]=item;
}

//creating function to pop elements
int pop() {
	int item;
	item=s[top];
	top-=1;
	return item;
}

//Main Function
void main() {
	printf("\nEnter a Valid Postfix Expression : ");
	scanf("%s",postfix);
	for (i=0;postfix[i]!='\0';i++) {
		symb=postfix[i];
		if (isdigit(symb)) {
			push(symb-'0');
		}
		else {
			op2=pop();
			op1=pop();
			switch (symb) {
				case '+' :
				push(op1+op2);
				break;
				case '-' :
				push(op1-op2);
				break;
				case '*' :
				push(op1*op2);
				break;
				case '/' :
				push(op1/op2);
				break;
				case '%' :
				push(op1%op2);
				break;
				case '$' :
				push(pow(op1,op2));
				break;
				default :
				push(0);
			}
		}
	}
	res=pop();
	printf("\nResult = '%d'\n\n",res);
}
