## Practical 5

This practical is concerned with user input into the program and pointers.

Two mathematical computations are included, which both require an initial user input. 

##### File Contents
This practical contains the *fib.c* file.

This code is an implementation of the Fibonacci sequence. Using **scanf** the user is asked to input an integer *n* which determines the nth Fibonacci number to be calculated. Checks are made to ensure the user does not enter an invalid number.

Pointers are also used to pass the last two numbers of the Fibonacci sequence to a summation function such that only two variables are required: *fn* and *fn_1*. This allows for an easy implementation of the sequence.


This practical also contains the *arctan.c* file.

This code requires multiple user inputs: the error, and the start and end points of the Maclaurin series and Log Approximation. The code computes each evaluation of **arctanh** at every increment in the user defined interval and stores them in an array. The absolute difference between the methods is then printed for the user.

