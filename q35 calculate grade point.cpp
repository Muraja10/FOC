#include <stdio.h>
using namespace std;
int main() {
  int num_courses = 5;
  char course_names[][20] = {"History", "Economics", "PE", "Chemistry", "Art"};
  char grades[] = {'B', 'A', 'A', 'C', 'B'};
  int units[] = {3, 3, 1, 4, 3};
  int i;
  float total_grade_points = 0.0;
  float total_units = 0.0;
  
  for (i = 0; i < num_courses; i++) {
    switch (grades[i]) {
      case 'A':
        total_grade_points += 4.0 * units[i];
        break;
      case 'B':
        total_grade_points += 3.0 * units[i];
        break;
      case 'C':
        total_grade_points += 2.0 * units[i];
        break;
      case 'D':
        total_grade_points += 1.0 * units[i];
        break;
      case 'F':
        total_grade_points += 0.0 * units[i];
        break;
      default:
        printf("Invalid grade %c for course %s\n", grades[i], course_names[i]);
        break;
    }
    total_units += units[i];
  }
  
  float gpa = total_grade_points / total_units;
  
  printf("Your grade point average for the semester is: %.2f\n", gpa);
  
  return 0;
}

