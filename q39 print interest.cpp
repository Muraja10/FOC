#include <stdio.h>
using namespace std;
int main() {
  float loan = 3000;
  float interest_rate = 0.01;
  float monthly_payment = 85;
  float balance = loan;
  float total_interest = 0;
  int months = 0;
  int years = 0;

  printf("Month\tInterest\tPrincipal\tBalance\n");

  while (balance > 0) {
    float interest = balance * interest_rate;
    float principal = monthly_payment - interest;
    balance -= principal;
    total_interest += interest;
    months++;

    printf("%d\t%.2f\t\t%.2f\t\t%.2f\n", months, interest, principal, balance);

    if (months % 12 == 0) {
      years++;
    }
  }

  printf("\nIt will take %d years and %d months to pay the loan back.\n", years, months % 12);
  printf("The total interest paid during that period will be $%.2f.\n", total_interest);

  return 0;
}

