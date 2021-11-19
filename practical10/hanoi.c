#include<stdio.h>
#include<stdlib.h>

void hanoi(int n, int start, int mid, int end);

int main(){

	int h;
	printf("Enter the number of disks: ");
	scanf("%d", &h);

	printf("\n\nThe Solution to the Tower of Hanoi problem with %d disks:\n", h);
	hanoi(h, 1, 2, 3);

	return 0;
}

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