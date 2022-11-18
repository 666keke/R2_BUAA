#include <stdio.h>
#include <math.h>
const double pi = 3.1415926535;
const double eps = 1e-14;
double y;

double f(double x) {
    return ((pi - 2 * x) / (2 * sin(x) * sin(x)) - 1 / (tan(x)));
}

double solve_f(double low, double high) {
    double mid = low + (high - low) / 2;
    while (high - low > eps) {
        mid = low + (high - low) / 2;
        f(mid) < y ? (high = mid) : (low = mid);
    }
    return mid;
}


int main() {
    scanf("%lf", &y);
    printf("%lf",solve_f(0,0.5*pi));
}