#include <stdio.h>
using namespace std;
int main() {
  float cubic_feet_used, water_bill;
  
  printf("Enter the cubic feet of water used: ");
  scanf("%f", &cubic_feet_used);
  
  if (cubic_feet_used <= 1000) {
    water_bill = 15.00;
  } else if (cubic_feet_used > 1000 && cubic_feet_used <= 2000) {
    water_bill = 15.00 + (cubic_feet_used - 1000) * 0.0175;
  } else if (cubic_feet_used > 2000 && cubic_feet_used <= 3000) {
    water_bill = 15.00 + 17.50 + (cubic_feet_used - 2000) * 0.02;
  } else {
    water_bill = 70.00;
  }
  
  printf("Your water bill is: $%.2f\n", water_bill);
  
  return 0;
}

