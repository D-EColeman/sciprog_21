#include<stdio.h>

int main(void){
    //Declare variables
    int i1 = 2, i2 = 1300;
    float f1 = 1.2, f2 = 123.123;

    //Standard print output
    printf("This is the default output using printf: \nTwo ints %d %d and two floats %f %f\n", i1, i2, f1, f2); 

    //Custom print output
    printf("This is a custom output using printf: \nTwo ints %d %d and two floats %.4f %.4f\n", i1, i2, f1 ,f2);

return 0;
}