#include <stdio.h>
using namespace std;
#define NUM_STUDENTS 25
#define NUM_TESTS 5

int main() {
    int grades[NUM_STUDENTS][NUM_TESTS];

    // Assume grades are already populated or inputted

    // Prompt for student number and test number
    int studentNumber, testNumber;
    printf("Enter the student number (1-25): ");
    scanf("%d", &studentNumber);
    printf("Enter the test number (1-5): ");
    scanf("%d", &testNumber);

    // Check if the entered student number and test number are valid
    if (studentNumber < 1 || studentNumber > NUM_STUDENTS || testNumber < 1 || testNumber > NUM_TESTS) {
        printf("Invalid student number or test number.\n");
    } else {
        // Retrieve the grade for the given student and test
        int grade = grades[studentNumber - 1][testNumber - 1];
        printf("Grade for student %d, test %d: %d\n", studentNumber, testNumber, grade);
    }

    return 0;
}

