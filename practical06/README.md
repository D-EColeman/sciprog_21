## Practical 6

This practical is concerned with matrix multiplication using multiple files in compilation and the creation of a Make file.

##### File Contents
This practical contains the *matrix_multiplication.c* file.

This code is an implementation of matrix multiplication in C using arrays. 
There is no user input and the matrices in question are static, i.e they are decided in the code. This code merely highlights the method of computing matrix mulitplication, namely the use of nested for loops.

This practical contains the *mm.c* file.

This code only contains the **matmult** function. This function takes three matrices as inputs, A, B, and C (as well as their dimensions) and computes A*B which is stored in C.


This practical also contains the *main.c* file.

This code is simply the matrix_multiplication.c file with the actual multiplying only carried out by the aforementioned **matmult** function.


A **Makefile** is used to compile main.o and mm.o together to create the mmc program.

