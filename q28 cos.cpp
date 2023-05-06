#include <stdio.h>
#include <math.h>
using namespace std;
double factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

double cos_series(double x, int n) {
    double sum = 1.0;
    int i;
    for (i = 1; i <= n; i++) {
        double term = pow(-1, i) * pow(x, 2*i) / factorial(2*i);
        sum += term;
    }
    return sum;
}

int main() {
    double x;
    int n;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    printf("Enter the number of terms to use in the series: ");
    scanf("%d", &n);

    double result = cos_series(x, n);
    printf("cos(%.2f) = %.6f\n", x, result);

    return 0;
}

