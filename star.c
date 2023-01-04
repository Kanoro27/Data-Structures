#include<stdio.h>
int main() {	
	//Declaration
	int i,j,n;
	//Input
	printf("Enter the number of Lines: ");
	scanf("%d",&n);
	//For Loop to Display the Stars
	for (i=0;i<n;i++) {
		for (j=0;j<i+1;j++) printf("*\t  ");
		printf("\n");
	}
	return 0;
}
