#include <stdio.h>
using namespace std;
int main() {
    double original_price;
    printf("Enter the original price of the item: ");
    scanf("%lf", &original_price);

    double sale_price = original_price;
    printf("Day 1: %.2lf\n", sale_price);

    for(int i = 2; i <= 5; i++) {
        sale_price *= 0.9;  // 10% less than the previous day's price
        printf("Day %d: %.2lf\n", i, sale_price);
    }

    return 0;
}

