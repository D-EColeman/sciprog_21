#include<stdio.h>
#include<stdlib.h>

int* allocatearray(int n);
void fillwithones(int* array, int n);
void printarray(int* array, int n);
void freememory(int* array);


int main(){
	int n;
	int* array;

	printf("Enter the size of the array: ");
	scanf("%d", &n);

	array = allocatearray(n);
	fillwithones(array, n);
	printarray(array, n);
	freememory(array);

	array = NULL;

	return 0;
}

//function that dynamically creates an int array of size n
int* allocatearray(int n){
	int* array;
	array = (int *) malloc(n * sizeof(int));
	return array;
}

//function which assigns 1 to each entry of an array
//requires an array pointer and the array size
void fillwithones(int* array, int n){
	int i;

	for(i = 0; i < n; i++){
		array[i] = 1;
	}
}

//function that prints the entries of the passed array
void printarray(int* array, int n){
	int i;

	for(i = 0; i < n; i++){
		printf("%d\n", array[i]);
	}
}

//function that frees up the allocated memory
void freememory(int* array){
	free(array);
	//array = NULL;
}



