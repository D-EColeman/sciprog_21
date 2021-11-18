#include <stdio.h>

//An implementation of Eulicd's Algorithm for finding the GCD
//Both an iterative and a recursive implementation are included

int iterGCD(int a, int b);
int recurGCD(int a, int b);

int main(void) {
   int a, b, error;

   printf("Please input two positive integers\n");
   error = scanf("%d %d",&a,&b);
   if (error != 2) {
     printf("Please try again\n");
     return 1;
   }

   if (a<=0 || b<=0) {
     printf("These numbers are not positive!\n");
     return 1;
   }

   //Run Euclid's Algorithm
   printf("The iterative Euclid's Algorithm implementation for (%d, %d) = %d\n", a, b, iterGCD(a, b));
   printf("The recursive Euclid's Algorithm implementation for (%d, %d) = %d\n", a, b, recurGCD(a, b));

  return 0;
}

int iterGCD(int a, int b){
	int temp;
	while(b != 0){
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int recurGCD(int a, int b){
	if(b == 0){
		return a;
	}
	else{
		return(recurGCD(b, a % b));
	}
}



