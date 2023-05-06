#include <stdio.h>
#include <string.h>
using namespace std;
int main() {
  int num_people, age;
  char reason[20];
  float cost;

  // Get number of people staying
  printf("Enter number of people staying: ");
  scanf("%d", &num_people);

  // Get customer's age
  printf("Enter customer's age: ");
  scanf("%d", &age);

  // Get reason for staying
  printf("Enter reason for staying (business/leisure): ");
  scanf("%s", reason);

  // Calculate base cost
  if (num_people == 2) {
    cost = 85;
  } else if (num_people == 3) {
    cost = 90;
  } else if (num_people == 4) {
    cost = 95;
  } else {
    cost = 95 + (num_people - 4) * 6;
  }

  // Apply discounts
  if (strcmp(reason, "business") == 0) {
    cost *= 0.8;  // 20% discount for business customers
  } else if (age > 60) {
    cost *= 0.85;  // 15% discount for customers over 60 years old
  }

  // Print final cost
  printf("The cost of the room is $%.2f per night.\n", cost);

  return 0;
}

