#include <stdio.h>
using namespace std;
#define NUM_SALESPEOPLE 10
#define NUM_DAYS 7

int main()
{
    int salesData[NUM_SALESPEOPLE][NUM_DAYS] = {
        {100, 200, 150, 300, 250, 175, 200},
        {250, 150, 200, 100, 175, 300, 225},
        // Add data for other salespeople here
    };

    double avgSalesPerson[NUM_SALESPEOPLE] = {0};
    double totalSalesDay[NUM_DAYS] = {0};
    double totalSalesWeek = 0;

    for (int i = 0; i < NUM_SALESPEOPLE; i++)
    {
        for (int j = 0; j < NUM_DAYS; j++)
        {
            avgSalesPerson[i] += salesData[i][j];
            totalSalesDay[j] += salesData[i][j];
            totalSalesWeek += salesData[i][j];
        }
        avgSalesPerson[i] /= NUM_DAYS;
    }
    totalSalesWeek /= NUM_DAYS;

    printf("Average sales per salesperson for the week:\n");
    for (int i = 0; i < NUM_SALESPEOPLE; i++)
    {
        printf("Salesperson %d: $%.2lf\n", i + 1, avgSalesPerson[i]);
    }

    printf("\nTotal sales for each day of the week:\n");
    for (int j = 0; j < NUM_DAYS; j++)
    {
        printf("Day %d: $%.2lf\n", j + 1, totalSalesDay[j]);
    }

    printf("\nTotal sales for the week: $%.2lf\n", totalSalesWeek);

    return 0;
}

