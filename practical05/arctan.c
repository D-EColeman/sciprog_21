#include<stdio.h>
#include<math.h>

double MaclaurinArc(const double x, const double delta);
double LogArc(const double x);

int main(){

    double precision;
    printf("Enter the desured precision for the Maclaurin series: ");
    scanf("%lf", &precision);

    double begin, end;
    printf("\nEnter the start and finish points for x: ");
    scanf("%lf, %lf", &begin, &end);

    double store = ((fabs(begin) + fabs(end))/precision) + 1.0;
    int storesize = store;

    double tanMac[storesize];
    double tanLog[storesize];

    double x;
    int i = 0;

    for(x = begin; x <= end; x += precision){
        tanMac[i] = MaclaurinArc(x, precision);
        tanLog[i] = LogArc(x);
        printf("The difference between the Maclaurin series calculation (tanMac[%.3lf]) and the Log calculation (tanLog[%.3lf]) is: %.10lf\n", x, x, fabs(tanMac[i] - tanLog[i]));
        i++;
    }

    return 0;
}

double MaclaurinArc(const double x, const double delta){

    double arcTan = 0;
    double elem;
    int n = 0;
    do{
        double val = 2*n + 1;
        elem = pow(x, val)/val;
        arcTan += elem;
        n++;
    } while(fabs(elem) >= delta);
    return arcTan;
}

double LogArc(const double x){
    return (log(1 + x) - log(1 - x))/2;
}