#include<stdio.h>
#include<stdlib.h>
//Function to Create an Array
int create() {
	int n,a[100],i;
	printf("Enter the Number of Elements :");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		printf("Enter %d Element : ",i+1);
		scanf("%d",&a[i]);
	}
}

//Function to Display the array
int deploy() {
	int i,n,a[100];
	printf("\nArray Elements :\n\n[ ");
	for(i=0;i<n;i++) {
		printf("%d  ",a[i]);
	}
	printf("]\n\n");
}

//Function to Insert an Elemen                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             t
int insert() {
	int i,n,pos,a[100],val; 	//pos is the position of the element and val is value of the element to be inserted or deleted
	printf("Enter the Position of Element to be Inserted : ");
	scanf("%d",&pos);
	printf("Enter the Value of the Element : ");	
	scanf("%d",&val);
	for(i<n-1;i>=pos;i--) {
		a[i+1]=a[i];
		
	}
	a[pos]=val;
	n+=1;
	printf("\n---Array Updated---\n");
}

//Function to Delete an Element
void delete() {
	int i,n,pos,a[100],val;
	printf("Enter the Position :");
	scanf("%d",&pos);
	val=a[pos];
	for(i=pos;i<n-1;i++) {
		a[i]=a[i+1];
	}
	n-=1;
	printf("\nDeleted Element %d\n",val);
}

//Main Function


int main() {
	//Declaration
	int n,i,choice=1,pos; //choice is user selection 
	//Loop Init
	while(choice) {
	printf("\n------MENU------\n");
	printf("1.Create Array\n");
	printf("2.Display Array\n");
	printf("3.Inserting an Element into an Array\n");
	printf("4.Deleting an Element into an Array\n");
	printf("5.Exit\n");
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
		insert();
		break;
		case 4:
		delete();
		break;
		case 5:
		exit(0);
		
		default:
		printf("Invalid Option...\n");
		}	
	}
	return 0;
}
