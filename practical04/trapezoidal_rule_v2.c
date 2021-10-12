#include<stdio.h>
#include<math.h>

float degree_to_rad(float deg);


int main(){
    int N = 12, i;
    float TanArr[N+1], deg, rad;

    //Calculates radians and finds f(xi)
    //Stores these values in an array
    for(i = 0; i <= N; i++){
        deg = i*5.0;
        rad = degree_to_rad(deg);
        TanArr[i] = tan(rad);
        printf("TanArr[%d] = %f (f(x) at x = %d)\n", i , TanArr[i], i);
    }

    //Find the area by trapezoidal rule
    float area;
    area = TanArr[0] + TanArr[N];
    for(i =1; i < N; i++){
        area  = area + 2.0*TanArr[i];
    }

    //Multiply area by (pi/3)/2N after conversion
    float mult_rad = degree_to_rad((60.0 - 0.0) /(2.0*N));
    area = mult_rad*area;

    //Results
    printf("\nTrapezoidal result: %f\n", area);
    printf("\nActual result: %f\n", log(2.0));



    return 0;    
}

float degree_to_rad(float deg){
    return ((M_PI * deg)/ 180.0);
}