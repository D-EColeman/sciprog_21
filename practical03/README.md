## Practical 3

This practical is concerned with implementing the trapezoidal rule and comparing the computed answer to the analytical **true** solution.

Additionally code is included which highlights C's print syntax.

##### File Contents
This practical contains the *trapezoidal_rule.c* file.

This code is an implementation of the trapezoidal rule for the **tan(x)** function. Using loops and keeping track of how we iteratively sum the area under the curve leads to the answer. The real result from **log(2)** is also computed for comparison.

This code makes extensive use of C's *math library* (when compiling we must include -lm for this reason!).


The file *print_test.c* is also contained in this practical. This is made up of a short snippet of code which demonstrates how decimal numbers may be printed. This is relevant for printing the solution to the trapezoid rule above!

