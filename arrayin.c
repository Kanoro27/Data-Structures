#include<stdio.h>
int main() {	
	//Declaration of Elements
	int a[10][10],i,j,m,n;
	//Enter Rows and Columns
	printf("Enter the number of rows:");
	scanf("%d",&m);
	printf(Enter the number of columns:");
	scanf("%d",&n);
	//Enter the Elements Input
	printf("Enter The Elements :");
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			printf("Enter [%d][%d] : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	//Elements Output
	printf("Output :\n");
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
	
