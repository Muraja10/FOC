#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    double x, sinx = 0.0;
    int i, j, n;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1, j = 1; i <= n; i++, j += 2) {
        if (i % 2 == 0) {
            sinx -= pow(x, j) / tgamma(j + 1);
        } else {
            sinx += pow(x, j) / tgamma(j + 1);
        }
    }

    printf("The value of sin(%lf) = %lf\n", x, sinx);

    return 0;
}

