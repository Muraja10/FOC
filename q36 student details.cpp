#include <stdio.h>
using namespace std;
int main() {
    int student_num, grade;
    int num_A = 0, num_B = 0, num_C = 0, num_D = 0, num_F = 0;

    // Loop through each student
    for (int i = 1; i <= 200; i++) {
        // Get input for student number and grade
        printf("Enter student %d's number: ", i);
        scanf("%d", &student_num);
        printf("Enter student %d's grade: ", i);
        scanf("%d", &grade);

        // Determine letter grade
        char letter_grade;
        if (grade >= 90) {
            letter_grade = 'A';
            num_A++;
        } else if (grade >= 78) {
            letter_grade = 'B';
            num_B++;
        } else if (grade >= 65) {
            letter_grade = 'C';
            num_C++;
        } else if (grade >= 50) {
            letter_grade = 'D';
            num_D++;
        } else {
            letter_grade = 'F';
            num_F++;
        }

        // Print out student info
        printf("Student %d - Number: %d, Grade: %d, Letter Grade: %c\n", i, student_num, grade, letter_grade);
    }

    // Print out total number of each letter grade
    printf("Total number of A's: %d\n", num_A);
    printf("Total number of B's: %d\n", num_B);
    printf("Total number of C's: %d\n", num_C);
    printf("Total number of D's: %d\n", num_D);
    printf("Total number of F's: %d\n", num_F);

    return 0;
}

