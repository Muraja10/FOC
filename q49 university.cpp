#include <stdio.h>
using namespace std;
#define NUM_CLASS_LEVELS 5
#define NUM_MAJORS 7

int main() {
    // Initialize counters
    int levelCount[NUM_CLASS_LEVELS] = {0};
    int majorCount[NUM_MAJORS] = {0};
    int levelMajorCount[NUM_CLASS_LEVELS][NUM_MAJORS] = {0};

    // Simulated data
    int numStudents = 1200;
    int studentData[numStudents][2] = {
        {1, 4}, {2, 2}, {3, 1}, {1, 3}, {4, 6}, {2, 5}, {3, 0}, /* ... and so on */
    };

    // Count students by level and major
    for (int i = 0; i < numStudents; i++) {
        int level = studentData[i][0];
        int major = studentData[i][1];

        levelCount[level]++;
        majorCount[major]++;
        levelMajorCount[level][major]++;
    }

    // Output the results
    printf("Level-wise student counts:\n");
    for (int i = 1; i <= 4; i++) {
        printf("Level %d: %d students\n", i, levelCount[i]);
    }
    printf("Graduate School: %d students\n", levelCount[0]);

    printf("\nMajor-wise student counts:\n");
    for (int i = 0; i < NUM_MAJORS; i++) {
        printf("Major %d: %d students\n", i, majorCount[i]);
    }

    printf("\nLevel-wise major counts:\n");
    for (int i = 1; i <= 4; i++) {
        printf("Level %d:\n", i);
        for (int j = 0; j < NUM_MAJORS; j++) {
            printf("  Major %d: %d students\n", j, levelMajorCount[i][j]);
        }
    }

    return 0;
}

