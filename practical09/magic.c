#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"

int main(){
	int n;
	printf("Enter the sqaure size: ");
	scanf("%d", &n);

	//Allocate the matrix
	int i;
	int ** magicSquare = malloc(n * sizeof(int));

	//the rows
	for(i = 0; i < n; i++){
		magicSquare[i] = malloc(n * sizeof(int));
	}

	//user defined input
	int j;

	for (i = 0; i < n; i++){
		printf("Enter the elements in row %d, seperated by a space/linebreak:\n", i+1);
		for (j = 0; j < n; j++){
			scanf("%d", &magicSquare[i][j]);
		}
	}

	printf("The square %s magic.\n", isMagicSquare(magicSquare, n) ? "IS" : "is NOT");

	//free up memory
	for( i =0; i < n; i++){
		free(magicSquare[i]);
	}

	free(magicSquare);

	return 0;

}