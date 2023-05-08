#include <stdio.h>

#define WEEKS 2
#define DAYS_PER_WEEK 7
using namespace std;
int main() {
    float windspeed[WEEKS][DAYS_PER_WEEK];
    float average_speed = 0.0;
    float highest_speed = 0.0;
    float lowest_speed = 9999.9;
    int highest_day = 0;
    int lowest_day = 0;

    // Input wind speeds for each day
    for (int i = 0; i < WEEKS; i++) {
        printf("Week %d:\n", i + 1);
        for (int j = 0; j < DAYS_PER_WEEK; j++) {
            printf("Enter wind speed for Day %d: ", j + 1);
            scanf("%f", &windspeed[i][j]);
            average_speed += windspeed[i][j];

            // Find highest and lowest wind speeds
            if (windspeed[i][j] > highest_speed) {
                highest_speed = windspeed[i][j];
                highest_day = j + 1 + (i * DAYS_PER_WEEK);
            }
            if (windspeed[i][j] < lowest_speed) {
                lowest_speed = windspeed[i][j];
                lowest_day = j + 1 + (i * DAYS_PER_WEEK);
            }
        }
    }

    // Calculate average wind speed
    average_speed /= (WEEKS * DAYS_PER_WEEK);

    printf("\nAverage wind speed over two weeks: %.2f\n", average_speed);
    printf("Highest wind speed was %.2f on Day %d\n", highest_speed, highest_day);
    printf("Lowest wind speed was %.2f on Day %d\n", lowest_speed, lowest_day);

    // Find difference between highest wind speed and each day's average wind speed
    for (int i = 0; i < WEEKS; i++) {
        for (int j = 0; j < DAYS_PER_WEEK; j++) {
            printf("Day %d: Difference between highest speed and average speed: %.2f\n", j + 1 + (i * DAYS_PER_WEEK), highest_speed - windspeed[i][j] - average_speed);
        }
    }

    return 0;
}

