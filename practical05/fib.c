#include<stdio.h>
#include<stdlib.h>

void fibonacci(int *fn_1, int *fn);


int main(){

    int n;
    printf("Please enter a positive integer for n: ");
    scanf("%d", &n); //read in user defined n-value

    //check for user error
    if(n < 1){
        printf("\nInvalid value for n! It must be a positive integer.\n");
        exit(1);
    }

    //declare known starting values of Fibonacci sequence
    int fn_1 = 0;
    int fn = 1;

    printf("\nThe Fibonacci sequence is:\n%d, %d, ", fn_1, fn);

    int i;

    //begin Fibonacci loop
    //we know f0 and f1 so we proceed from f2
    for(i = 2; i < n - 1; i++){
        fibonacci(&fn_1, &fn);
        printf("%d, ", fn);
    }

    //print final fn Fibonacci value, resolves issues with formatting (i.e the comma and space)
    fibonacci(&fn_1, &fn);
    printf("%d\n", fn);

    return 0;
}


//simple function which performs the Fibonacci operation
//uses pointers for efficient memeory usage
void fibonacci(int *fn_1, int *fn){

    int val;
    val = *fn + *fn_1;
    *fn_1 = *fn;
    *fn = val;
}