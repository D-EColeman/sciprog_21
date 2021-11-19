## Practical 7

This practical is concerned with dynamically allocated arrays.

All files use the header *stdlib.h* as it allows us to utilise malloc in dynamically creating arrays by reserving space in memory.

##### File Contents
This practical contains the *make_e.c* file.

This code is used to compute the Taylor series of e^x (where x = 1) in order to find teh value of *e*. The user is asked for the order of the series to compute.

Malloc is used to dynamically create a double array of the user defined size such that the computed values at each order of the Taylor series are saved.
We then compare the accuracy with *e* at each order up to the user defined one.

**CAREFUL consideration must be paid to the fact the dynamic memory is *freed* at the end of the program!**

Inaccuracies begin to creep in at higher order likely due to catastrophic cancellation in the floating point arithmetic.



This practical also contains the *dyn_mem.c* file.

This code shows each individual step of dynamic memory allocation through the use of seperate functions. An array is created using malloc in a function, then fills it with ones and prints it in another seperate function, before the memory is freed by a final function.

This highlights the steps needed when using dynamic memory allocation.
