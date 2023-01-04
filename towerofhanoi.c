#include<stdio.h>

//Creating a Recursing Function for the Event
void towerofhanoi(int n, char from_rod, char to_rod, char aux_rod) {
	if (n==1) {
		printf("\nMove Disk 1 from Rod %c to Rod %c",from_rod,to_rod);
		return ;
	}
	towerofhanoi(n-1,from_rod,aux_rod,to_rod);
	printf("\nMove Disk %d from Rod %c to Rod %c",n,from_rod,to_rod);
	towerofhanoi(n-1,aux_rod,to_rod,from_rod);
}

//Main Program whih uses Tower of Hanoi
int main() {
	int n;
	printf("Enter the Number of Disks : ");
	scanf("%d",&n);
	towerofhanoi(n,'A','B','C');
	printf("\n");
	return 0;
}
