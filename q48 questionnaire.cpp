#include <stdio.h>
using namespace std;
#define MAX_ALUMNI 100

typedef struct {
    int age;
    char gender;
    char marital_status;
    char college_major[50];
    double salary;
} Alumni;

double calculateAverageSalary(Alumni alumni[], int count, char set1, char set2) {
    double totalSalary = 0.0;
    int validCount = 0;
    
    for (int i = 0; i < count; i++) {
        if ((alumni[i].gender == set1 && alumni[i].marital_status == set2) ||
            (alumni[i].marital_status == set1 && alumni[i].college_major == set2) ||
            (alumni[i].college_major == set1 && alumni[i].age == set2)) {
            
            totalSalary += alumni[i].salary;
            validCount++;
        }
    }
    
    return (validCount > 0) ? (totalSalary / validCount) : 0.0;
}

int main() {
    Alumni alumni[MAX_ALUMNI];
    int alumniCount;

    // Get alumni count from user
    printf("Enter the number of returned questionnaires: ");
    scanf("%d", &alumniCount);

    // Input alumni data
    for (int i = 0; i < alumniCount; i++) {
        printf("\nAlumni %d:\n", i + 1);
        
        printf("Age: ");
        scanf("%d", &alumni[i].age);
        
        printf("Gender (M/F): ");
        scanf(" %c", &alumni[i].gender);
        
        printf("Marital Status (S/M): ");
        scanf(" %c", &alumni[i].marital_status);
        
        printf("College Major: ");
        scanf("%s", alumni[i].college_major);
        
        printf("Salary: ");
        scanf("%lf", &alumni[i].salary);
    }

    // Get the two sets of items for cross-tabulation
    char set1, set2;
    printf("\nEnter the two sets of items to cross-tabulate:\n");
    printf("Set 1 (A - Age / G - Gender / M - Marital Status / C - College Major): ");
    scanf(" %c", &set1);
    
    printf("Set 2 (A - Age / G - Gender / M - Marital Status / C - College Major): ");
    scanf(" %c", &set2);
    
    // Calculate and display the average salary
    double averageSalary = calculateAverageSalary(alumni, alumniCount, set1, set2);
    printf("\nAverage Salary: $%.2lf\n", averageSalary);

    return 0;
}

