#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"

//maximum number of characters in the file name
#define MAX_FILE_NAME 100

int getlines(char filename[MAX_FILE_NAME]);

int main(){

	FILE *f;
	char filename[MAX_FILE_NAME];
	printf("Enter the file name: ");
	scanf("%s", filename);

	f = fopen(filename, "r");

	int n = getlines(filename);

	//Allocate the matrix
	int i;
	int ** magicSquare = malloc(n * sizeof(int*));

	//the rows
	for(i = 0; i < n; i++){
		magicSquare[i] = malloc(n * sizeof(int));
	}

	//user defined input
	int j;

	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			fscanf(f, "%d", &magicSquare[i][j]);
		}
	}

	printf("The square %s magic.\n", isMagicSquare(magicSquare, n) ? "IS" : "is NOT");

	//free up memory
	for( i = 0; i < n; i++){
		free(magicSquare[i]);
	}

	free(magicSquare);

	//close the file
	fclose(f);

	return 0;

}

//finds the number of lines in the file
int getlines(char filename[MAX_FILE_NAME]){
	FILE *fp;
	fp = fopen(filename, "r");

	int ch_read;
	int count = 0;

	while((ch_read = fgetc(fp)) != EOF){
		if(ch_read == '\n'){
			count++;
		}
	}

	printf("There are %d lines in the file.\n", count);
	fclose(fp);
	return count;
}