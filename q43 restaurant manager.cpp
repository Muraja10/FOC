#include <stdio.h>
using namespace std;
#define HOURS_PER_DAY 24
#define MIN_EMPLOYEES 3
#define EMPLOYEES_PER_CUSTOMERS 20

int main() {
    int customers[HOURS_PER_DAY];
    int totalCustomers = 0;
    int averageCustomers;
    int employeesNeeded;
    int hour;

    // Get the number of customers for each hour
    printf("Enter the number of customers for each hour:\n");
    for (hour = 0; hour < HOURS_PER_DAY; hour++) {
        printf("Hour %d: ", hour + 1);
        scanf("%d", &customers[hour]);
        totalCustomers += customers[hour];
    }

    // Calculate the average number of customers
    averageCustomers = totalCustomers / (HOURS_PER_DAY * 14);

    // Calculate the needed number of employees per hour
    printf("\nNumber of employees needed per hour:\n");
    for (hour = 0; hour < HOURS_PER_DAY; hour++) {
        employeesNeeded = MIN_EMPLOYEES + (customers[hour] / EMPLOYEES_PER_CUSTOMERS);
        printf("Hour %d: %d\n", hour + 1, employeesNeeded);
    }

    return 0;
}

