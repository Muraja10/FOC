#include <stdio.h>
using namespace std;
int main() {
    float totalMiles = 0.0, totalGallons = 0.0, milesPerGallon;
    int i, odometerReading, prevOdometerReading = 0, gallons;

    for (i = 1; i <= 6; i++) {
        printf("Fillup %d: \n", i);
        printf("Enter the number of gallons of gas filled: ");
        scanf("%d", &gallons);
        printf("Enter the odometer reading: ");
        scanf("%d", &odometerReading);

        // Calculate the miles traveled since the last fillup
        int milesTraveled = odometerReading - prevOdometerReading;
        prevOdometerReading = odometerReading;

        // Calculate the miles per gallon for this fillup
        milesPerGallon = (float)milesTraveled / gallons;
        printf("Miles per gallon for this fillup: %.2f\n", milesPerGallon);

        // Add to the total miles and gallons for all fillups
        totalMiles += milesTraveled;
        totalGallons += gallons;
    }

    // Calculate the average miles per gallon for all fillups
    float avgMilesPerGallon = totalMiles / totalGallons;
    printf("Average miles per gallon for all fillups: %.2f\n", avgMilesPerGallon);

    return 0;
}

