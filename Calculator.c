#include<stdio.h>
int main() {	
	//Declaration
	int a,b,c;
	char op;
	//Taking Input of Operators and Variables
	printf("Enter the Operator : \n'+' for Addition\n'-' for Subraction\n'/' for Division\n'*' for Multiplication\n'%'Sfor Reminder");
	scanf("%c",&op);
	printf("Enter Two numbers :  ");
	scanf("%d%d",&a,&b);
	//Loop to run the Cases
	switch(op) {
		case '+' :
		c=a+b;
		printf("%d\n",c);
		break;

		case '-' :
		c=a-b;
		printf("%d\n",c);
		break;

		case '*' :
		c=a*b;
		printf("%d\n",c);
		break;

		case '/' :
		if (b==0) {
			printf("Enter non zero value for b");
			return 0;
		}
		else {
			c=a/b;
			printf("%d\n",c);
		}
		break;

		case '%' :
		if (b==0) {
			printf("Enter non zero value for b");
			return 0;
		}
		else {
			c=a/b;
			printf("%d\n",c);
		} 
		break;
		default :
		printf("Enter a Correct Operator...");
		break;
	return 0; 
			
}
