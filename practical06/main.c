#include<stdio.h>

int main(){

    //define parameters given in question
    //define the associated arrays/matrices
    int n = 5, p = 3, q = 4;
    double A[n][p], B[p][q], C[n][q];

    int i, j, k;

    //initialise the matrices
    //Matrix A
    for(i = 0; i < n; i++){
        for(j = 0; j < p; j++){
            A[i][j] = i + j;
        }
    }

    //Matrix B
    for(i = 0; i < p; i++){
        for(j = 0; j < q; j++){
            B[i][j] = i - j;
        }
    }

    //Matrix C
    for(i = 0; i < n; i++){
        for(j = 0; j < q; j++){
            C[i][j] = 0.0;
        }
    }

    matmult(n, p, q, A, B, C);
    
    //printing the matrices
    printf("\nThis is matrix A:\n\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < p; j++){
            printf("%3.0f", A[i][j]);
        }
        printf("\n");
    }

    printf("\nThis is matrix B:\n\n");
    for(i = 0; i < p; i++){
        for(j = 0; j < q; j++){
            printf("%3.0f", B[i][j]);
        }
        printf("\n");
    }

    printf("\nThis is matrix C:\n\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < q; j++){
            printf("%3.0f", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}