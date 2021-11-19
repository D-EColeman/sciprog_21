## Practical 10

This practical is concerned with implementing a program for finding a solution to the well-known Tower of Hanoi problem.


##### File Contents
This practical contains a single file.

The file *hanoi.c* contains the code which solves the Tower of Hanoi problem.
The implementation of the solution in this file is that of recursion.

We recursively call the *hanoi* function so that the disks are progressively moved to each peg such that the principle of the problem is not disobeyed. 

The method of thinking is to move **n-1** disks from the starting peg to the middle peg. 
The **nth** disk (which is the biggest) is then moved from the starting peg to the end peg.
The **n-1** disks on the middle peg must now be moved to the end peg and to do this we can just think of it as a smaller Tower of Hanoi Problem; where we move **n-2** disks to the first peg (which is now acting as the middle peg) and the **n-1th** remaining disk form the middle peg to the final peg.

This is succesively and recursively computed until the **1st** disk (the smallest) is moved to the end peg.
