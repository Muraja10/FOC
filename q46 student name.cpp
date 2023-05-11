#include <stdio.h>
#include <string.h>
using namespace std;
#define MAX_STUDENTS 100

void printTestScores(const char* name, const char** students, int* scores, int numStudents) {
    int i;
    for (i = 0; i < numStudents; i++) {
        if (strcmp(name, students[i]) == 0) {
            printf("Name: %s\n", students[i]);
            printf("Test Scores: %d %d %d %d\n", scores[i * 4], scores[i * 4 + 1], scores[i * 4 + 2], scores[i * 4 + 3]);
            return;
        }
    }
    printf("Student not found.\n");
}

int main() {
    char* students[MAX_STUDENTS] = {"John Smith", "Emily Johnson", "Michael Davis", "Sarah Williams"};
    int scores[MAX_STUDENTS * 4] = {85, 78, 92, 88, 90, 92, 86, 78, 92, 90, 88, 85, 95, 90, 88, 92};

    int numStudents = sizeof(students) / sizeof(students[0]);

    char name[100];
    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  // Remove newline character

    printTestScores(name, students, scores, numStudents);

    return 0;
}

