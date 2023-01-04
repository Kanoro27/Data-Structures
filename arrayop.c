#include<stdio.h>
#include<stdlib.h>
//Function to Create an Array
int create() {
	int n,a[100],i;
	printf("Enter the Number of Elements.\n");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		printf("Enter %d Element : ",i+1);
		scanf("%d",&a[i]);
	}
}

//Function to Display the array
int deploy() {
	int i,n,a[100];
	printf("\nArray Elements :\n[ ");
	for(i=0;i<n;i++) {
		printf("%d  ",a[i]);
	}
	printf("]\n");
}

//Main Function
int main() {
	//Declaration
	int n,i,choice=1;
	//Loop Init
	while(choice) {
	printf("\n------MENU------\n");
	printf("1.Create Array\n");
	printf("2.Display Array\n");
	printf("3.Exit\n");
	printf("----------------\n");
	//Taking Input
	printf("\nEnter Option : ");
	scanf("%d",&choice);
		//Switch to Run the Loop...
		switch(choice) {
		case 1 :
		create();	
		break;
		case 2:
		deploy();
		break;
		case 3:
		exit(0);
		default:
		printf("Invalid Option...\n");
		}	
	}
	return 0;
}


