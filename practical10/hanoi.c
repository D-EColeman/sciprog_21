#include<stdio.h>
#include<stdlib.h>

void hanoi(int n, int start, int mid, int end);

int main(){

	//user defines the number of disks for the problem
	int h;
	printf("Enter the number of disks: ");
	scanf("%d", &h);

	//starts the solving problem
	//the pegs are denoted 1, 2, 3
	printf("\n\nThe Solution to the Tower of Hanoi problem with %d disks:\n", h);
	hanoi(h, 1, 2, 3);

	return 0;
}

//a recursive function to solve the ToH problem
void hanoi(int n, int start, int mid, int end){
	if(n == 1){
		printf("Moved disk %d from %d to %d\n", n, start, end);
	}

	else{
		hanoi(n-1, start, end, mid);
		printf("Moved disk %d from %d to %d\n", n, start, end);
		hanoi(n-1, mid, start, end);
	}
}