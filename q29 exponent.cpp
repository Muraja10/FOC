#include <stdio.h>
using namespace std;
double power(double x, int n) {
    double result = 1.0;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double exp_series(double x, int terms) {
    double sum = 1.0;
    for (int i = 1; i <= terms; i++) {
        double term = power(-x, i) / factorial(i);
        sum += term;
    }
    return sum;
}

int main() {
    double x = 2.0;
    int terms = 5;
    double result = exp_series(x, terms);
    printf("e^(-%.2lf) = %lf\n", x, result);
    return 0;
}

