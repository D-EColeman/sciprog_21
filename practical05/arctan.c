#include<stdio.h>
#include<math.h>

double MaclaurinArc(const double x, const double delta);
double LogArc(const double x);

int main(){

    //setup the user defined precision value
    double precision;
    printf("Enter the desured precision for the Maclaurin series: ");
    scanf("%lf", &precision);

    //setup and read in the user defined interval
    double begin, end;
    printf("\nEnter the start and finish points for x: ");
    scanf("%lf, %lf", &begin, &end);

    //determine the array size needed
    double store = ((fabs(begin) + fabs(end))/precision) + 1.0;
    int storesize = store;

    double tanMac[storesize];
    double tanLog[storesize];

    double x;
    int i = 0;

    //create the for loop which calculates the value at each x in the interval
    //for both versions of the arctan function
    for(x = begin; x <= end; x += precision){
        tanMac[i] = MaclaurinArc(x, precision);
        tanLog[i] = LogArc(x);
        printf("The difference between the Maclaurin series calculation (tanMac[%.3lf]) and the Log calculation (tanLog[%.3lf]) is: %.10lf\n", x, x, fabs(tanMac[i] - tanLog[i]));
        i++;
    }

    return 0;
}

//the Maclaurin series approximation of the Arctan function
double MaclaurinArc(const double x, const double delta){

    double arcTan = 0;
    double elem;
    int n = 0;

    //do-while loop which computes the successive entries in the series until precision is satisfied
    do{
        double val = 2*n + 1;
        elem = pow(x, val)/val;
        arcTan += elem;
        n++;
    } while(fabs(elem) >= delta);
    return arcTan;
}

//the Log function realisation of the arctan function
double LogArc(const double x){
    return (log(1 + x) - log(1 - x))/2;
}