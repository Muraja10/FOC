#include <stdio.h>
using namespace std;
int main() {
    int age;
    float charge;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 55) {
        charge = 10.00;
    } else if (age >= 21) {
        charge = 15.00;
    } else if (age >= 13) {
        charge = 10.00;
    } else if (age >= 3) {
        charge = 5.00;
    } else {
        charge = 0.00;
    }

    printf("The ticket charge is $%.2f\n", charge);

    return 0;
}

