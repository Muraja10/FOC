#include <stdio.h>
using namespace std;
int main() {
    int num_grades, total_points = 0;
    char grade;
    
    printf("Enter the number of grades: ");
    scanf("%d", &num_grades);
    
    for (int i = 0; i < num_grades; i++) {
        printf("Enter grade %d: ", i + 1);
        scanf(" %c", &grade);
        
        if (grade == 'A' || grade == 'a') {
            total_points += 4;
        } else if (grade == 'B' || grade == 'b') {
            total_points += 3;
        } else if (grade == 'C' || grade == 'c') {
            total_points += 2;
        } else if (grade == 'D' || grade == 'd') {
            total_points += 1;
        } else if (grade == 'F' || grade == 'f') {
            total_points += 0;
        } else {
            printf("Invalid grade entered.\n");
            i--;
        }
    }
    
    float grade_avg = (float)total_points / num_grades;
    
    printf("The grade average is %.2f\n", grade_avg);
    
    return 0;
}

