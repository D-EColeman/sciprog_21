#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int factorial(int n);
double polynomial(int n, int x);

int main(){

	//define all variables, including array pointer, before proceeding
	int poly_order, array_size;
	double* poly_array;
	int i, x = 1;

	//user defined polynomial order
	printf("Enter the order of the polynomial you would like to compute: ");
	scanf("%d", &poly_order);

	array_size = poly_order + 1; //accounting for "0th order"

	//dynamically allocate memory for the user defined array
	poly_array = (double *) malloc(array_size * sizeof(double));

	//compute the ith term in our Taylor expansion of e
	for(i = 0; i < array_size; i++){
		poly_array[i] = polynomial(i, x);
		printf("\nf(%d) = %0.8f", i , poly_array[i]);
	}

	//print the difference between our estimates and the true value of e
	for(i = 0; i < array_size; i++){
		printf("The difference between e and our estimate up to term %d is: %0.15f\n", i, exp(1) - poly_array[i]);
	}

	//free up memory usage after malloc
	free(poly_array);
	poly_array = NULL;

	return 0;
}

int factorial(int n){
	int i;
	int fact = 1;

	if(n == 0){
		return 1; //special case of 0!
	}

	for(i = 1; i <= n; i++){ //computes the factorial operation, e.g 1*2*3*...*n
		fact = fact * i;
	}

	return fact;
}

double polynomial(int n, int x){
	double sum = 0.0;
	int i = 0;

	for(i = 0; i <= n; i++){ //computes the taylor series up to order i
		sum = sum + (double)(pow(x, i)/factorial(i)); //factorial function referenced here
	}

	return sum;
}


//ANSWER TO ERROR DISCREPANCY
//As the order increases the terms become so tiny that small floating point errors, that would usually be too miniscule to be
//significant, are now dominating the addition at each step. This leads to inaccuracies.