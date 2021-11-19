## Practical 4

This practical is concerned with implementing improved versions of the trapezoidal rule **using arrays**.

Two improved versions are included.

##### File Contents
This practical contains the *trapezoidal_rule_v2.c* file.

This code is an implementation of the trapezoidal rule for the **tan(x)** function, which uses an array to store the tan value at each step in the process. The array is initiliased and the area is simply computing using a for loop iterating through the array.

This practical also contains the *trapezoidal_rule_v3.c* file.

This code improves upon v2 by adding the actual area computation to a subfunction outside main. This code highlights how functions are declared and defined outside of main and also how arrays are passed to functions.

This code makes extensive use of C's *math library* (when compiling we must include -lm for this reason!).

