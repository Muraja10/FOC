#include <stdio.h>
using namespace std;
#define ACCESSORY_PRICE_1 1000
#define ACCESSORY_PRICE_2 1500
#define ACCESSORY_PRICE_3 2000
// Add more accessory prices as needed

#define SALES_TAX_RATE 0.1

int main() {
    double initialPrice;
    int numAccessories;

    printf("Enter the initial price of the car: ");
    scanf("%lf", &initialPrice);

    printf("Enter the number of accessories (0 to 10): ");
    scanf("%d", &numAccessories);

    double totalCost = initialPrice;

    for (int i = 1; i <= numAccessories; i++) {
        int accessoryChoice;
        printf("Enter the price category for accessory %d (1, 2, 3, etc.): ", i);
        scanf("%d", &accessoryChoice);

        switch (accessoryChoice) {
            case 1:
                totalCost += ACCESSORY_PRICE_1;
                break;
            case 2:
                totalCost += ACCESSORY_PRICE_2;
                break;
            case 3:
                totalCost += ACCESSORY_PRICE_3;
                break;
            // Add more cases for additional accessory prices
            default:
                printf("Invalid accessory choice.\n");
                i--;  // Repeat the loop iteration for the invalid input
        }
    }

    double salesTax = totalCost * SALES_TAX_RATE;
    totalCost += salesTax;

    printf("The total cost of the car is: $%.2lf\n", totalCost);

    return 0;
}

