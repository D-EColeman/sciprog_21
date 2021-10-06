//#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

int main(void){

    //Declare the variables of this implementation of the trapezoidal rule
    //pi/3 rads is the same as 60 degrees
    int a = 0, N = 12, i;
    float b = M_PI/3;

    //First part of the sum
    //f(x0) + f(xN)
    float auc = tan(a) + tan(b);
    printf("First sum: %f\n", auc);

    //For loop for intermediate sums
    //Must convert from degrees to radians to comply with GNU tan specifications
    for(i = 5; i < 60; i = i + 5){
        auc = auc + (2*tan((M_PI * i) / 180.0));
    }

    //Final multiplication
    float final = (b-a)/(2*N);

    auc = auc * final;

    //Compare results to true solution
    printf("This is the result from the trapezoidal rule: %f\n", auc);
    printf("This is the real result: %f\n", log(2.0));

return 0;    
}