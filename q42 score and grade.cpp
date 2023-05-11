#include <stdio.h>
using namespace std;
#define MAX_STUDENTS 35
#define NUM_QUESTIONS 20

int main() {
    int studentIDs[MAX_STUDENTS];
    int studentScores[MAX_STUDENTS];
    int numCorrect[MAX_STUDENTS];
    char grades[MAX_STUDENTS][2]; // 2 characters for grade (e.g., "A\0")
    
    int bestScore = 0;
    
    // Input scores for each student
    printf("Enter the scores for each student:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Student ID: ");
        scanf("%d", &studentIDs[i]);
        
        printf("Number correct: ");
        scanf("%d", &numCorrect[i]);
        
        studentScores[i] = numCorrect[i] * 5; // Each correct answer is worth 5 points
        
        // Find the best score
        if (studentScores[i] > bestScore) {
            bestScore = studentScores[i];
        }
    }
    
    // Calculate grades for each student
    for (int i = 0; i < MAX_STUDENTS; i++) {
        // Calculate grade ranges based on the best score
        int gradeRange = bestScore - studentScores[i];
        
        if (gradeRange <= 2) {
            grades[i][0] = 'A';
        } else if (gradeRange <= 4) {
            grades[i][0] = 'B';
        } else if (gradeRange <= 6) {
            grades[i][0] = 'C';
        } else if (gradeRange <= 8) {
            grades[i][0] = 'D';
        } else {
            grades[i][0] = 'F';
        }
        
        grades[i][1] = '\0'; // Null-terminate the grade string
    }
    
    // Output the results
    printf("\nStudent Results:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("ID: %d, Number Correct: %d, Grade: %s\n", studentIDs[i], numCorrect[i], grades[i]);
    }
    
    // Output the best score
    printf("\nBest Score: %d\n", bestScore);
    
    return 0;
}

